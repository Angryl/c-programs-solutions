#include<stdio.h> 
void main(){

char to_upper(char); 
char to_lower(char); 
char is_lower(char); 
char is_upper(char); 
char is_digit(char); 
char is_alphabet(char); 
char ch,i;
int choice; do
{
printf("enter the value "); 
scanf("%c",&ch);

printf("ENTER YOUR CHOICE\n");
printf("1. convert to upper case\n 2. convert to lower case\n 3. check the character is in lower case\n 4. check the character is in upper case\n 5. check the enter value is digit 0 to 9\n 6. check the enter value is alphabet\n");
scanf("%d",&choice); 
switch(choice){
case 1:
	to_upper(ch); 
	break;
case 2:
	to_lower(ch); 
	break;
case 3:
	is_lower(ch); 
	break;
case 4:
	is_upper(ch); 
	break;
case 5:
	is_digit(ch); 
	break;
case 6:
	is_alphabet(ch); 
	break;
default:
	 printf(" worng choice\n");
}
 

printf("\nenter y/Y to continue :"); 
scanf("%c",&i);
}while(i=='y'||i=='Y'); 
getch();
}

char to_upper(char ch){
if(ch>=97 && ch<=122)
{ ch=ch-32;
printf("%c is in upper case",ch);
}
else if(ch>=65 && ch<=90){
printf(" %c is already in upper case",ch);
}
else{
printf("this is not a character\n");
}
return 0;
}
char to_lower(char ch)
{
if(ch>=65 && ch<=90){ 
ch=ch+32;
printf("%c is in lower case",ch);
}
else if(ch>=97 && ch<=122){
printf(" %c is already in lower case",ch);
}
else{
printf("this is not a character\n");
}
return 0;
}
char is_lower(char ch)
{
if(ch>=97 && ch<=122){ 
printf("%c is in lower case",ch);
}
else if(ch>=65 && ch<=90)
{
printf("%c is not in lower case",ch);
}
else{
printf("this is not a character\n");
 
}
}
char is_upper(char ch)
{
if(ch>=65 && ch<=90){ 
printf("%c is in upper case",ch);
}
else if(ch>=97 && ch<=122){
printf("%c is not in upper case",ch);
}
else{
printf("this is not a character");
}
}
char is_digit(char ch)
{
if(ch>=48 && ch<=57){ 
printf("%c is a digit",ch);
}
else{
printf("%c is not a digit",ch);
}
}
char is_alphabet(char ch)
{
if((ch>=97 && ch<=122)||(ch>=65 && ch>=90)){ 
printf("%c is a alphabet",ch);
}
else{
printf("%c is not a alphabet",ch);
}
}
