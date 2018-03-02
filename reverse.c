#include <stdio.h>
int main()
{
int a,r=0,remainder;
printf("Enter an integer: ");
scanf("%d",&a);
while(a!=0)
{
remainder=a%10;
r=r*10+remainder;
a=a/10;
}
printf("reversed integer is:%d",rev);
return 0;
}
