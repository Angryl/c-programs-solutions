#include<stdio.h> 
#include<stdlib.h>
#include<conio.h> 

int amstrong(int); 
int prime(int); 
int main(){
int x,ch; char
choice='y';

do{
printf("enter the value : "); 
scanf("%d",&x);
printf("\n\n"); 
printf("\n1.prime number"); 
printf("\n2.amstrong number"); 
printf("\n3.exit\n"); 
scanf("%d",&ch);
switch(ch){	c
ase 1: 
	prime(x);
	break;
case 2: 
	amstrong(x); 
	break;
case 3: 
	exit(0);
default: 
	printf("enter the wrong choice");
	break;
}
printf("\nenter 'y' for continue\n"); 
fflush(stdin);
scanf("%c",&choice);
}while(choice=='y' || choice=='Y'); 
return 0;
}

 int amstrong(int a){	

int i,c,b1,count=0,p,sum=0,n,b;
b=b1=a; 

while(a!=0){
a=a/10; 
count++;
}
c=count; 
while(b!=0){
n=b%10;
p=n; 
while(count>1){
n=n*p; 
count--;
}
sum=sum+n; 
b=b/10;
count=c;

}
 

if(b1==sum){
printf("number is amstrong");
}
else{
printf("number is not amstrong ");
}
return 0;
} int prime(int x){
int i,count=0; for(i=1;i<x;i++){
if(x%i==0){
count++;
}
}

if(count==1){
printf("\n number is prime");
}
else{

printf("\n number is not prime");
}

return 0;
}
 
