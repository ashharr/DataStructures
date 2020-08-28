#include<stdio.h>
#define MAX 100
void push(int item);
int pop();
int top = -1, stack[MAX];
int main()
{   
    int exit = 1;
    int c,item,i;
    while(exit){
    printf("\n\n*** STACK MENU *** \n(1)POP\n(2)PUSH\n(3)TRAVERSE\n(4)EXIT\n");
    scanf("%d", &c);
    switch (c)
    {
    case 1:/* constant-expression */
        /* code */
        printf("%d HAS BEEN POPPED", pop());
        break;
    case 2:
        printf("ENTER ELEMENT TO PUSH TO THE STACK:");
        scanf("%d", &item);
        push(item);
        break;
    case 3:
        if(top == -1){
            printf("Stack Underflow!");
        }
        else{
            printf("STACK:\n");
            for ( i = 0; i < top +1; i++)
            {
                printf("[%d]\n", stack[i]);
            }
        }
        break;
    case 4:
        exit = 0;
        break;
    default:
    printf("ENTER VALID OPTION!\n");
        break;
    }

}
return 0;
}
void push(int item){
    if(top == MAX -1){
    printf("Stack Overflow!");
    }
    else{
        stack[++top] = item;
    }
}
int pop(){
    int temp;
    if(top == -1){
        printf("Stack Underflow!");
    }
    else{
        temp = stack[top--];
    }
    return temp;
}

