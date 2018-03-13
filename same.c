#include<stdio.h>
#include<conio.h>
void main()
{
int n,s,i;
clrscr();
printf("\n enter the number:");
scanf("%d %d",&n,&i);
while(i!=0&&n!=0)
{
s=n%10;
printf("%d",s);
n=n/10;
i--;
getch();
}
}
