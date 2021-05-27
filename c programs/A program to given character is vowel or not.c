#include <stdio.h>

int main() {
// Write C code here char a;
printf("Enter the character to check: ");
scanf("%c",&a);

switch(a){ 
case 'A':
case 'E':
case 'I':
case 'O':
case 'U':
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':{

printf("it is a vowel:");
 break;
}

default:
{ printf("This is consonant"); 
  break;
}
}
return 0;
}
