#include <stdio.h> void main()
{
int i,num,fact=1; 
printf("enter the number"); 
scanf("%d",&num); 
while(i<=num)
{
fact=fact*i; i++;
}
printf("factorial of number %d is %d",num,fact); 
getch();
}
