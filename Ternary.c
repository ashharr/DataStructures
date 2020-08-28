#include<stdio.h>
int main(){
    int num;
    printf("Enter Number:");
    scanf("%d", &num);
    num % 2 == 0 ? printf("Number is even") : printf("Number is odd");
}