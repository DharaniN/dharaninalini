#include <stdio.h>
#include<conio.h>
void main()
{
	int a,n[10],m[10],r,w11,i,c1,s;
	scanf("%d",&a);
	scanf("%d",&w11);
	s=0;
	printf("\nEnter the array elements: ");
	for(i=0;i<a;i++)
	{
		scanf("%d",&n[i]);
	}
	c1=0;
	for(i=0;i<a;i++)
	{
		if(n[i]!=0)
		{
			m[s]=n[i];
			s++;
		}
	}
	printf("\nThe %d odd number is %d .",w11,m[w11]);
	getch();
}
