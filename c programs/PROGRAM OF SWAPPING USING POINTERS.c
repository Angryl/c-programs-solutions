// swapping using pointers 
#include<stdio.h>
int swap(int* ,int* ); 
int main()
{
int num1,num2; num1=10; num2=15;
printf("values before swapping %d and%d\n",num1,num2); 
swap(&num1,&num2);

printf("\nvalues after swapping num1 = %d and num2 =%d",num1,num2); 
return 0;
}

int swap(int * x,int * y)
{
int temp; temp=* x;
* x=* y;
* y=temp;

}
 
