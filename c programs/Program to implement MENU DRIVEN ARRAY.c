#include <stdio.h> 
int minimum(int arr[],int size); 
int maximum(int arr[],int size); 
int sumof(int arr[],int size);
int main()
{

int arr[100],i,size,min,max,sum=0; 

printf("Enter size of array: ");
scanf("%d",&size);

printf("Enter Variable\n"); 

for(i=0;i<size;i++){
scanf("%d",&arr[i]);
}

printf("min = %d\n",minimum(arr,size)); 
printf("Max = %d\n",maximum(arr,size)); 
printf("Sum = %d",sumof(arr,size));
return 0;
}
int minimum(int arr[],int size){ int min = arr[0],i;
for(i=1;i<size;i++){

if(min>arr[i]) min = arr[i];
 
}
return min;
}
int maximum(int arr[],int size){ 
int max = arr[0],i;

for(i=1;i<size;i++){ 
if(max<arr[i]) max= arr[i];
}
return max;
}
int sumof(int arr[], int size){ 
int sum=0,i; for(i=0;i<size;i++)	{
sum = sum+arr[i];
}
return sum;
}
