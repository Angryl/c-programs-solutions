#include<stdio.h> int addition(int,int);
int   subtraction(int,int); int multiplication(int ,int); int division(int,int);
void main()
{
int a,b,choice;
printf("enter the value to do the operation "); 
scanf("%d%d",&a,&b); printf("choose the operation : \n1.addition.\n2.subtraction.\n3.multiplication.\n4.division.\n");
scanf("%d",&choice);

switch(choice)
{
case   1:addition(a,b);
	break;
case 2:subtraction(a,b);
	break;
case 3:multiplication(a,b);
	break;
case 4:division(a,b);
	break;
}
}

int addition(int x,int y)
{
int * p,* q ,* r; int c; p=&x;
      q =&y; r=&c;
* r= * p +* q ;
printf("adddition of %d and %d is %d ",x,y,* r);
}

int subtraction(int x,int y)
{
int * p,* q ,* r;
int c; p=&x;      
q =&y; r=&c;
* r= * p -* q ;
printf("\n\nsubtraction of %d and %d is %d ",x,y,* r);
}

int multiplication(int x,int y)
{
int * p,* q ,* r; 
int c; p=&x;      
q =&y; r=&c;
* r= * p * * q ;
printf("\n\n multiplication of %d and %d is %d ",x,y,* r);
}

int division(int x,int y)
{
int * p,* q ,* r; 
int c; p=&x;      
q =&y; r=&c;
* r= * p / * q ;
printf("\n\ndivision of %d and %d is %d ",x,y,* r);
}
