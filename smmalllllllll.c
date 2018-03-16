#include<stdio.h>
void main()
{
int z[1000],i,j,k,w,a;
printf("enter the value:");
scanf("%d",&k);
scanf("%d",&a);
printf("enter the array values:");
for(i=0;i<k;i++)
{
scanf("%d",&z[i]);
}
for(i=0;i<k-1;i++)
{
for(j=i;j<k;j++)
{
if(z[i]>z[j])
{
w=z[i];
z[i]=z[j];
z[j]=w;
}
}
}
printf("smallest value is%d",z[a-1]);
}
