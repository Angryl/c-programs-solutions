#include<stdio.h>
int fact (int);// function created for factorial 
int fibn(int); // fucntion created for fibonacci
int ackerman(int,int);//function created for ackerman 
void main()
{

int number1,number2,choice,Continue;

do
{
printf("\nenter the values : "); 
scanf("%d",&number1); 
scanf("%d",&number2);
printf("enter your choice :\n1.factorial.\n2.fibonacci.\n3.ackerman.\n"); 
scanf("%d",&choice);

switch(choice)
{
case 1:printf("result = %d",fact(number1));
	break; 
case 2:printf("result = %d",fibn(number1));
	break; 
case 3:printf("result =%d",ackerman(number1,number2));
	break; 
default:printf("\nchoice is not available");
 }

printf ("\nenter 1 to continue "); scanf("%d",&Continue);
} while(Continue==1);
getch();
}

int fact(int number1)
{
int result=0; 
if(number1==0)
 return 1;
else
result = number1*fact(number1-1);
 return result;
}
int fibn(int number1)
{
int result=0;
 if(number1<=2)
 return 1;
else
{
result = fibn(number1-1)+fibn(number1-2);
return result;
}
}
int ackerman (int number1,int number2)
{
if(number1==0)
return (number2+1);
else
if(number2==0)
return ackerman(number1-1,1); 
else
return ackerman(number1-1,ackerman(number1,number2-1));
}

