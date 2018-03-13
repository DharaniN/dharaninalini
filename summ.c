#include <stdio.h>
#include<conio.h>
void main()
{
	int a11,b11,i,sum=0,d11;
  clrscr();
	printf("\nEnter the initial value: ");
	scanf("%d",&a11);
	printf("\nEnter the difference: ");
	scanf("%d",&d11);
	printf("\nEnter the end value: ");
	scanf("%d",&b11);
	for(i=a11;i<=b11;i=i+d11)
	{
		sum=sum+i;
	}
	printf("\n%d\n",sum);
	getch();
}
