#include<stdio.h>
#include<conio.h>
void main()
{
int n[100],i,j,m;
clrscr();
printf("Enter the number");
for(i=0;i<10;i++)
scanf("%d",&n[i]);
for(i=0;i<10;i++)
{
	for(j=i+1;j<10;j++)
	{
		if(n[i]>n[j])
		{
		m=n[i];
		n[i]=n[j];
		n[j]=m;
	}
	
}
}
printf("%d",n[0]);
getch();
}
