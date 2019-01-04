#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;
};
struct node *p,*q,*temp,*list=NULL;
struct node *getnode()
{
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    return(p);
}

void freenode(struct node *p)
{
    free(p);
}

void addbegin()
{
    int x;
    p=getnode();
    printf("\n Enter the element to be inserted ");
    scanf("%d",&x);
    p->info=x;
    p->next=list;
    list=p;
}

void addend()
{
    int x;
    temp=list;
    p=getnode();
    printf("\n Enter the element to be inserted ");
    scanf("%d",&x);
    if(temp==NULL)
        list=p;
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=p;
    }
    p->info=x;
    p->next=NULL;
}

void addmid()
{
    int x,pos,i;
    p=getnode();
    temp=list;
    printf("\n Enter the element to be inserted ");
    scanf("%d",&x);
    p->info=x;
    printf("\n Enter the position where element is to be inserted ");
    scanf("%d",&pos);
    for(i=0;i<pos-2;i++)
    {
        temp=temp->next;
    }
    if(temp==NULL)
    {
        printf("\n There are less than %d pos",pos);
        return;
    }
    p->next=temp->next;
    temp->next=p;
}

void delbegin()
{
    int x;
    if(list==NULL)
        printf("\n The list is empty");
    else
    {
        p=list;
        x=p->info;
        printf("\n The deleted element is %d",x);
        list=list->next;
        freenode(p);
    }
}

void delend()
{
    int x;
    if(list==NULL)
        printf("\n The linked list is empty");
    else
    {
        q=NULL;
        p=list;
        while(p->next!=NULL)
        {
            q=p;
            p=p->next;
        }
        if(q==NULL)
        {
            list=NULL;
        }
        else
        {
            q->next=NULL;
        }
        x=p->info;
        printf("\n The deleted element is %d ",x);
        freenode(p);
    }
}

void delmid()
{
    int i,pos;
    if(list==NULL)
        printf("\n The lnked list is empty");
    else
    {
        q=NULL;
        p=list;
        printf("\n Enter position from where element is to be deleted ");
        scanf("%d",&pos);
        for(i=0;i<pos-1;i++)
        {
            q=p;
            p=p->next;
            if(p==NULL)
            {
                printf(" There are less than %d pos ",pos);
                return;
            }
        }
        q->next=p->next;
        printf("\n The deleted element is %d",p->info);
        freenode(p);
    }
}

void display()
{
    p=list;
    if(p==NULL)
    {
        printf("List is empty");
        return;
    }
    while(p!=NULL)
    {
        printf("%d\t",p->info);
        p=p->next;
    }
}

void main()
{
    int c;
    do
    {
        printf("\n LINKED LIST");
        printf("\nEnter operation to be performed\n1.ADD BEGINNING\n2.ADD END\n3.ADD MIDDLE\n4.DELETE BEGINNING\n5.DELETE END\n6.DELETE MIDDLE\n7.DISPLAY\n8.EXIT\n");
        scanf("%d",&c);
        switch(c)
        {
            case 1:    addbegin();
                    break;
            case 2:    addend();
                    break;
            case 3:    addmid();
                    break;        
            case 4:    delbegin();
                    break;
            case 5:    delend();
                    break;
            case 6:    delmid();
                    break;
            case 7:    display();
                    break;
            default:    printf("\n Invalid choice");
                    break;
        }
    }while(c!=8);
}