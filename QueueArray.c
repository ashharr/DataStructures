#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int  q[100],f=-1,r=-1,val;
void insert(int [],int);
int delete(int []);
void display(int []);
void main()
{
	int c;
	do 
	{
		printf("\n\t***MAIN MENU***");
		printf("\n1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT");
		printf("\n\tENTER THE CHOICE:");
		scanf("%d",&c);
		switch (c)
		{
			case 1: 
					printf("\n\tENTER THE VALUE YOU WANT TO INSERT:");
					scanf("%d",&val);
					insert(q,val);
					break;
			case 2:
					
					val=delete(q);
					printf("\tTHE deleted ELEMENT IS %d",val);
					break;
			
			case 3:
					display(q);
					break;
		}
	}while(c!=4);
}
void insert(int q[],int val)
{
	if(r==MAX-1||f>r)
	{
		printf("\nOVERFLOW");
	}
	
	if(f==-1&&r==-1)
	{
		f=r=0;
		q[r]=val;
	}
	else if(f==0||r>=0)
	{
		r++;
		q[r]=val;
	}
}
int delete(int q[])
{
	if((f==-1&&r==-1)||f>r)
	{
		printf("\nUNDERFLOW");
		return -1;
	}
	else
	{
		val=q[f];
		f++;
		return val;
	}
}
void display(int q[])
{
	if(f==-1&&r==-1||f>r)
	{
		printf("\nQUEUE UNDERFLOW");
	}
	else
	{	
		int i;
		printf("\nTHE ELEMENTS OF THE QUEUE ARE:\n");
		for(i=f;i<=r;i++)
		{
			printf("%d\t",q[i]);
		}
	}
}

		
		
	