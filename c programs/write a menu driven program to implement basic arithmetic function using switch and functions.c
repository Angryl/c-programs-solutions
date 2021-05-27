#include<stdio.h> 
#include<stdlib.h> 
int addition(int,int); 
int subtraction(int,int);
int division(int,int);
 int multiplication(int,int);
 int main(){
int a,b,c,ch;
char choice='y';

do{
printf("enter the value of a & b\n");
 scanf("%d %d",&a,&b);
printf("	\n");
 

printf("1. addition\n");	
printf("2. subtraction\n");	
printf("3. division\n");
printf("4. multiplication\n");
printf("5. Exit \n");	

scanf("%d",&ch); 

switch(ch){
case 1: 
	c=addition(a,b);
 	printf("%d",c);
	printf("%d",c);	
	printf("%d",c);
	break;
case 2: 
	c=subtraction(a,b);
	break;
case 3: 
	c=division(a,b);
	break;
case 4: 
	c=multiplication(a,b);	
	printf("%d",c); 
	break;
case 5: 
	exit(1);
default: 
	printf("you enter the wrong choice"); 
	break;
 
}

printf("\nenter 'y' for continue\n"); 
fflush(stdin);
scanf("%c",&choice);
}
while(choice=='y'); 
return 0;

}

int addition(int a,int b){
return a+b;
} 

int subtraction(int a,int b){
return a-b;
}
int division(int a,int b){
return a/b;
}

int multiplication(int a,int b){ 
return a*b;
}
