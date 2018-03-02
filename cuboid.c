#include<stdio.h>
int main()
{
int I,W,H,S,vol;
printf("enter three:");
scanf("%d%d%d",&L,&W,&H);
vol=L*W*H;
S=(2*L*W)+(2*L*H)+(2*H*W);
printf("surface area of cuboid = %d",S);
printf("volume of cuboid = %d",vol);
return 0;
}
