#include<stdio.h>
int a[10], n;
int InsertionSort()
{
	int k, i , x;
	for( k =1; k<= n-1; k++)
	{
		x = a[k];
		i = k-1;
		
		while( i >=0 && a[i] >x)
		{
			a[i+1] = a[i];
			i--;
		}
	a[i+1] = x;
	}
	
}

void main()
{
	int i  ;
	
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	printf(" Enter %d elements: \n", n);
	for(i = 0 ; i<n ;i++)
	{
		printf(" a [%d] = ",i);
		scanf("%d", &a[i]);
	}
	
	InsertionSort();
	printf("\nThe Sorted Array is:");
	for(i = 0 ; i<n ;i++)
	{
		printf(" a [%d] = %d\n",i,a[i]);
		
	}
}
/*
Output:
cbpl1-22@cbpl122-Lenovo-S510:~/3117052$ ./insertion_sort.outEnter the size of the array: 5
 Enter 5 elements: 
 a [0] = 12
 a [1] = 2
 a [2] = 10
 a [3] = 88
 a [4] = 1

 The Sorted Array is:"
 a [0] = 1
 a [1] = 2
 a [2] = 10
 a [3] = 12
 a [4] = 88
*/
