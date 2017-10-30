#include<stdio.h>
void main()
{
int a,b,d;
printf("Enter Two no's:");
scanf("%d%d",&a,&b);
d=a;
a=b;
b=d;
printf("The two no's after swapping are:%d%d",a,b);
}
