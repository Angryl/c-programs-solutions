#include<stdio.h> 
#include<stdlib.h> 
long int factorial(int); 
int addition_digit(int); 
long int power(long int,int);

 int main(){
int b,ch,a=0;	
long int c=0;
char choice='y'; 

do{
printf("	\n"); 
printf("1. factorial\n");
printf("2.addition_digit\n"); 
printf("3. power\n"); 
printf("4. exit\n");
printf("	\n");
scanf("%d",&ch); 

switch(ch){
case 1: 
	printf("enter the number for factorial\n"); 
	scanf("%d",&a);
	c=factorial(a);
	 printf("factorial = %ld",c); 
	break;
case 2: 
	printf("enter the number for addition\n"); 
	scanf("%d",&a);
	c=addition_digit(a);
	printf("addition_digit = %ld",c); 
	break;
case 3: 
	printf("enter the number for power a & b\n"); 
	scanf("%d %d",&a,&b);
	c=power(a,b);	
	printf("power = %ld",c); 
	break;
case 4: 
	exit(0);
default:
	printf("\nyou enter the wrong choice");
	printf("\nenter 'y' for continue\n"); 
	fflush(stdin); 	
	scanf("%c",&choice);
}while(choice=='y'); 
return 0;
} 

long int factorial(int a){
 
int i;	
int x=a;
for(i=1;i<=x;i++){ 
x=x*i;
}
printf("%d",x); 
return x;
} 

int addition_digit(int n){
int a,sum; 
while(n!=0){
a=n%10;
sum=sum+a;
n=n/10;
}
return sum;
}

long int power(long int x,int y){ 
int i;	
long int a=x;
for(i=1;i<y;i++){ 
x=x*a;
}
return a;
}
 
