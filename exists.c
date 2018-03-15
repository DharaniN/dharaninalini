#include<stdio.h>
int main()
{
int a[10],i,n1,t1=0,j,k1;
printf("enter the range\n");
scanf("%d",&n1);
scanf("%d",&k1);
printf("enter the array values\n");
for(i=0;i<n1;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n1;i++)
{
    if(a[i]==k1)
    {
        t1++;
    }
}
if(t1>0)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
