#include <stdio.h> 

int insert_array(); 
int display_array(); 
int addition();
int subtraction(); 
int transpose();
int arr1[5][5],arr2[5][5],arr3[5][5]; 
int i,j;

int main()
{
int choice,repeat;
do
{
printf("enter your choice \n 1.insertion of matrices.\n2.display of an matrices.\n3.addition of a matrices.\n4.subtraction of matrices.\n5.tranpose of matrices.\n" );
scanf("%d",&choice); switch(choice)
{
case 1:
	insert_array();
	break; 

case 2:
	display_array();
	break; 

case 3:
	addition();
	break;

case 4:
	subtraction();
	break; 

case 5:
	transpose();
	break;
}
printf("enter 1 to do more operation\n"); 
scanf("%d",&repeat);
} while(repeat==1);

return 0;
}
int insert_array()
{
printf("Enter the elements of array1\n");
 
for(i=0; i<3; i++)
{
for(j=0;j<3;j++)
{
printf("Enter value for arr1[%d][%d]:", i, j); 
scanf("%d", &arr1[i][j]);
}
}
printf("Enter the elements of array2\n"); 
for(i=0; i<3; i++)
{
for(j=0;j<3;j++)
{
printf("Enter value for arr2[%d][%d]:", i, j); 
scanf("%d", &arr2[i][j]);
}
}return 0;
}
int display_array()
{
printf("elements of array1 are:\n"); 
for(i=0;i<3; i++)
{
for(j=0;j<3;j++)
{
printf("%d ", arr1[i][j]); 
printf(" ");
}
printf("\n");
}
printf("elements of array2 are:\n"); 

for(i=0;i<3; i++)
{
for(j=0;j<3;j++)
{
printf("%d ", arr2[i][j]);
printf(" ");
}
printf("\n");
}
}
int addition()
{
printf("addition of array elements are : \n"); 

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
arr3[i][j] = arr1[i][j] + arr2[i][j];
printf("%d",arr3[i][j]); printf(" ");
}
printf("\n");
}
}
int subtraction()
{
printf("subtraction of arrays\n"); 
for(i=0;i<3;i++)
{
for (j=0;j<3;j++)
{
arr3[i][j]=arr1[i][j]-arr2[i][j];
printf("%d",arr3[i][j]); printf(" ");
}
printf("\n");
}
}
int transpose()
{
printf("transpose of matrix 1\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d",arr1[j][i]); printf(" ");
}
printf("\n");
}
printf("transpose of matrix 2\n"); 

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d",arr2[j][i]); 
printf(" ");
}
printf("\n");
}
}
