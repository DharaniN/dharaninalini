#include <stdio.h>
#include<conio.h>
void main()
{
int n,i,sum=0;
clrscr();
printf("Enter the number ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum+=i;
}
printf("The value is %d",sum);
getch();
}
