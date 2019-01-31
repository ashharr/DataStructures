#include<stdio.h>
void main()
{
	int a[10], n , i, j, pos, largest;
	printf("Enter the no. of elements: ");
	scanf("%d",&n);
	printf("Enter the elements: ");
	for(i=0; i <n; i++)
	{
		printf("a [%d] =\t ", i);
		scanf("%d",&a[i]);
	}	
	// Sorting
	for(j= n-1; j >= 1 ; j--)
	{
		largest = a[0];
		pos = 0;
		for(i=1 ; i <= j ; i++)
		{
			if(a[i] > largest)
			{
				largest = a[i];
				pos = i;
			}
			
		}
		a[pos] = a[j];
		a[j] = largest;
	}
	
	// Output
	printf("The sorted Array is: ");
	for(i = 0 ; i<n ; i++)
	{
		printf("%d \t", a[i]);
	}
}

/*
Output:
cbpl1-22@cbpl122-Lenovo-S510:~/3117052$ gcc selection.c -oselection.out
cbpl1-22@cbpl122-Lenovo-S510:~/3117052$ ./selection.out
Enter the no. of elements: 5
Enter the elements: a [0] =	 1515
a [1] =	 232
a [2] =	 51
a [3] =	 2
a [4] =	 3232
The sorted Array is: 2 	51 	232 	1515 	3232 	cbpl1-22@cbpl122-Lenovo-S510:~/3117052$ 

*/
