#include<stdio.h> 
int arraysum(); 

void main()
{
arraysum();
}

int arraysum()
{
int arr[10],* ptr,i,sum=0,siz e;

printf("enter the siz e of an array = "); 
scanf("%d",&siz e);
ptr=arr;

printf("\nenter the value of an array : \n"); 
for(i=0;i<siz e;i++)
{
scanf("%d",(ptr+i));
}
for(i=0;i<siz e;i++)
{
sum+=* (ptr+i);
}
printf("\n sum of an array = %d",sum);
}
