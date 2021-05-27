#include<stdio.h>
 int main()
{
int n,sum=0,P;
printf("enter any number:");
scanf("%d",&n);
while(n>0)
{
P=n%10;
n=n/10; sum=sum+P;
}
printf("sum of number is:%d",sum);

return 0;
}
