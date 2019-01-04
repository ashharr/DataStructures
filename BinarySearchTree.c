//Implementation of Binary Search tree
#include <stdio.h> 
#include <stdlib.h>
  typedef struct node {
    int data;
    struct node * left, * right;
  }treenode;
void inorder(treenode * root) {
  if (root != NULL) {
    inorder(root -> left);
    printf("%d", root -> data);
    inorder(root -> right);

  }
}
void preorder(treenode * root) {
  if (root != NULL) {
    printf("%d", root -> data);
    preorder(root -> left);
    preorder(root -> right);
  }
}
void postorder(treenode * root) {
  if (root != NULL) {
    postorder(root -> left);
    postorder(root -> right);
    printf("%d", root -> data);
  }
}
void insert(treenode ** root, int x) {
  treenode * ptr, * prev, * p;
  ptr = (treenode * ) malloc(sizeof(treenode));
  ptr -> data = x;
  ptr -> right = ptr -> left = NULL;
  p = * root;
  prev = NULL;
  while (p != NULL) {
    prev = p;
    if (x < p -> data)
      p = p -> left;
    else
      p = p -> right;
  }
  if (prev == NULL)
    
    *root = ptr;
  else {
    if (x < prev -> data)
      prev -> left = ptr;
    else
      prev -> right = ptr;
  }
}
treenode* FindMin(treenode* root)
{
	while(root->left != NULL) root = root->left;
	return root;
}

treenode* delete(treenode *root, int data) {
	if(root == NULL) 
			return root; 
	else if(data < root->data) 
			root->left = delete(root->left,data);
	else if (data > root->data) 
			root->right = delete(root->right,data);
	// Wohoo... I found you, Get ready to be deleted	
	else {
		// Case 1:  No child
		if(root->left == NULL && root->right == NULL) { 
			free(root);
			root = NULL;
		}
		//Case 2: One child 
		else if(root->left == NULL) {
			treenode *temp = root;
			root = root->right;
			free (temp);
		}
		else if(root->right == NULL) {
			treenode *temp = root;
			root = root->left;
			free (temp);
		}
		// case 3: 2 children
		else { 
			treenode *temp;
			temp = FindMin(root->right);
			root->data = temp->data;
			root->right = delete(root->right,temp->data);
		}
	}	
	return root;
}





void main() {
  treenode * root;
  root = NULL;
  int c, n, x, i,val;
  do {
    printf("***MAIN MENU***");
    printf("\n1.Inorder Traversal \n2.Preorder Traversal \n3.Postorder Traversal\n4.Add Element\n 5.Delete a node\n");
    printf("Enter your choice:");
    scanf("%d", & c);

    switch (c) {
    case 1:
      inorder(root);
      break;
    case 2:
      preorder(root);
      break;
    case 3:
      postorder(root);
      break;
    case 4:

      printf("Enter the Element to be Added:");
      scanf("%d", & x);
      insert( & root, x);
      break;
	case 5:
		printf("Enter the element you want to delete:");
		scanf("%d",&val);
		treenode* y;
		
		y=delete(root,val);
		printf("%d was deleted",y->data);
    }

  } while (c != 6);

}












