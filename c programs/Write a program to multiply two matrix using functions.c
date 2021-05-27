#include<stdio.h>

void inputmatrix(int [][10],int,int); 
void outputmatrix(int [][10],int,int);
void multimatrix(int [][10],int [][10],int [][10],int,int,int); 

void main(){
int mat1[10][10],mat2[10][10],mat3[10][10],row1,col1,row2,col2; 

printf("enter the value of row and col for matrix 1..."); 
scanf("%d%d",&row1,&col1);

printf("enter the value of row and col for matrix 2..."); 
scanf("%d %d",&row2,&col2); 

printf("enter the first matrix \n"); 
inputmatrix(mat1,row1,col1);

printf("enter the second matrix \n"); 
inputmatrix(mat2,row2,col2); 

printf("matrix 1\n"); 
outputmatrix(mat1,row1,col1); 

printf("matrix 2\n"); 
outputmatrix(mat2,row2,col2); 

if(col1==row2){
multimatrix(mat1,mat2,mat3,row1,col1,col2);

printf("multiplication of matrix\n"); 
outputmatrix(mat3,row1,col2);

}
else{

}
 printf("multiplication can't be possible \n");
 
}

void inputmatrix(int x[][10],int r,int c){ 
int i,j;
for(i=0;i<r;i++){
for(j=0;j<c;j++){

printf("enter the value %d,%d ",i,j); s
canf("%d",&x[i][j]);
}
}
}
void outputmatrix(int x[][10],int r,int c){ 

int i,j;
for(i=0;i<r;i++){
for(j=0;j<c;j++){
printf("%d ",x[i][j]);
}
printf("\n");
}
}
 
void multimatrix(int x[][10],int y[][10],int z[][10],int r1,int c1,int c2){ 

int i,j,k;
for(i=0;i<r1;i++){
for(j=0;j<c2;j++){
z[i][j]=0; 
for(k=0;k<c1;k++){
z[i][j] += x[i][k]*y[k][j];
}
}
}
}
