# include< stdio.h>
int   str_    leng    th(char   []); 
void str_reverse(char [], char []); 
void str_ copy (char [], char []); 
int str_ compare(char [], char []);
void str_ concatenate(char [], char[]);
int    str_palindrome(char    []);
 
void main(){
char s[100], s1[100], s2[100], s3[100];
int i;

printf("enter first string");
scanf("% s", &   s);

printf("enter second string");
scanf("%   s", & s3); 

i=str_ leng th(s);

printf("leng th of string ...... % d", i);
str_ rev erse(s, s1); // (source, destination, length) 

printf("\ nstring after rev erse...... %   s", s1);
str_ copy (s, s2); / / (source, destination)

printf("\ nstring s copy   in string   s2...... % s", s2); 

if(str_ compare(s, s3)==0){
printf("\ nstring first and second string are equal ")
}
else{
printf("\ nstring first and second string are not equal ")

if(str_ palindrome(s)==0){
printf("\ nstring is palindrome")
}
else{
printf("\ nstring is not palindrome")
str_ concatenate(s, s3);
printf("\ nstring first and second after concatenation...... % s", s)

int str_ leng  th(char s[]){
int i=0, count=0; while(s[i]! =' \ 0' )
count++; i++;
}
return count

void str_ reverse(char s[], char s1[]){
int j=0, i;
i=str_ length(s); 
while(s[j]! =' \ 0' ){
s1[j++]=s[- - i]
}
s1[j]=' \ 0' ;

void str_ copy (char s[], char s2[]){
int i=0; while(s[i]! =' \ 0' )
s2[i]=s[i]; i++;
}
s2[i]=' \ 0'

int str_ compare(char s[], char s3[]){
int i=0;
if(str_ leng th(s)==str_ leng th(s3)) 
while(s[i]! =' \ 0' ){
if(s[i]! =s3[i]){
return 1;
} i++;
}
return 0;

return 1;

void str_ concatenate(char s[], char s3[])
int i=0, l;
l=str_ leng th(s); while(s3[i]! =' \ 0' ){
s[l+i]=s3[i]; i++;
}
s[l+i]=' \ 0'

int str_ palindrome(char s[]){
int i, j, k=0; i=str_ leng th(s); j=i/ 2;
while(j> 0){
if(s[k++]! =s[- - i])
return 1;
}
 
j- -

return 0
