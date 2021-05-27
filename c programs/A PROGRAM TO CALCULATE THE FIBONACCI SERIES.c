#include<stdio.h> #include<conio.h>

void main()
{
int a=1,b=1,c,i=1;

printf("%d %d ",a, b); do{
c=a+b; 
printf("%d ",c); 
a=b;
b=c; 
i++;
}
while(i<=10); 
getch();
}
