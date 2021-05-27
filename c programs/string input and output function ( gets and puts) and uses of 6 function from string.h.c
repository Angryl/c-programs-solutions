#include< stdio.h>
#include< string.h> 
void main(){
char name[ 100] , b[ 100] , surname[ 100] , f ullname[ 200] ;
 int i;
printf ("enter the name	");
gets(name);

printf ("\ nenter the surname	");
gets(surname); 
i=  strlen(name);

printf("string length.....% d\ n", i);

printf("copy string1 in another string	");
strcpy(b, name); puts(b); strrev(name);

printf("reverse of  string");
puts(name); 

strrev(name); 
strcat(name, surname);
printf("\ nconcatinate two string");
puts(name); 
strupr(name);
printf ("convert string into upper case	");
puts(name);
}