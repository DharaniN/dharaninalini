#include <stdio.h>
#include<conio.h>
void main()
{
	int n1,a1[100],k1,i,c1;
	clrscr();
	printf("\nEnter the number");
	scanf("%d",&n1);
	printf("\nEnter the k value : ");
	scanf("%d",&k1);
	printf("\nEnter the array elements: ");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&a1[i]);
	}
	c1=0;
	for(i=0;i<n1;i++)
	{
		if(a1[i]==k1)
		{
			c1+=1;
		}
	}
	if(c1>1)
	{
		printf("\n%d is repeated %d times in the array ",k1,c1);
	}
	else
	{
		printf("\n%d is not repeated in the array ",k1);
	}
    getch();
}
