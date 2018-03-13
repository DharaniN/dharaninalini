#include<stdio.h>
#include<conio.h>
void main()
{
int n,m,v=1,i;
scanf("%d %d",&n,&m);
for(i=1;i<=m;i++)
v=v*n;
printf("%d",v);
}
