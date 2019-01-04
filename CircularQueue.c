#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int  q[100],f=-1,r=-1,val;
void insert(int []);
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
					insert(q);
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
void insert(int q[])
{
	printf("Enter the element you want to insert:\n");
	scanf("%d",&val);
	if((f==0&&r==MAX-1)||(f==r+1))
	{
		printf("\nOVERFLOW");
		
	}
	else if(f==-1&&r==-1)
	{
		f=0;
		r=0;
		q[r]=val;
	}
	else if(f==0&&r==MAX-1)
	{	
		r=0;
		q[r]=val;
	}
	else
	{
		r++;
		q[r]=val;
	}
}
int delete (int q[])
{
	if(r==-1&&f==-1)
	{
		printf("UNDERFLOW");
	}
	else
	{
		val=q[f];
		if(f==r)
		{
			f=r=-1;
		}
		else
		{
			if(f==MAX-1)
				f=0;
			else
				f++;
		}
	}
	return val;
}
void display(int q[])
{
	if(f==-1&&r==-1)
	{
		printf("\nUNDERFLOW");
	}
	else{
		int i;
		printf("\nTHE ELEMENTS OF THE QUEUE ARE:");
		for(i=f;i<=r;i++)
			printf("%d\t",q[i]);
	}
}














