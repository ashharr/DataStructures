#include<stdio.h>
int isCommon(int a[], int b[], int m, int n);
int main()
{
    int m, n, i, flag= 0;
    printf("Enter the size of the arrays a[m] and b[n]");
    scanf("%d%d", &m, &n);
    int a[10], b[10];
    printf("Enter the %d elements of a[]:", m);
    for ( i = 0; i < m; i++)
        scanf("%d", &a[i]);
    printf("Enter the %d elements of b[]:", m);
    for ( i = 0; i < n; i++)
        scanf("%d", &b[i]);
    flag = isCommon(a,b,n,m);
    if(flag == 1){
        printf("Arrays have common element");
    }
    else if(flag == 0){
        printf("No common element found");
    }
    
}

int isCommon(int a[], int b[], int n, int m)
{
    int i, j;
    for ( i = 0; i < m; i++)
        for ( j = 0; i < n; i++)
            if(a[i] == b[j]){
                return 1;
            }
}
