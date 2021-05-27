#include<stdio.h> 
#include<stdlib.h> 

void main(int arg c, char *argv []){
// argument count =arg c
// argument value = arg v

int i; char ch;
FILE *fp1, *fp2; 
if(arg c! =3){
printf("number of arg ument are mismatched ");
 exit(1);
}

fp1=fopen(arg v [1], "r");
fp2=fopen(arg v [2], "w"); 
while((ch=fg etc(fp1))! =EO F )
fputc(ch, fp2);
}
fclose(fp1);
 fclose(fp2);
}
