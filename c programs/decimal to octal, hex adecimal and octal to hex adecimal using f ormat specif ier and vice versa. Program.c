# include< stdio.h> 
# include< conio.h> 
int main(){

int a, b, c, d, e, f ; ///variable decleration


printf ("enter the number in decimal to convert in octal\ n"); 
scanf ("% d", &a);

printf ("octal % o\ n", a); // print in octal


printf ("enter the number in octal to convert in decimal\ n"); 
scanf ("% o", &b);

printf ("decimal % d\ n", b); / / print in decimal


printf ("enter the number in decimal to convert in hex adecimal\ n"); 
scanf ("% d", &c);

printf ("hex adecimal % x \ n", c); / / print in hex a decimal 


printf ("enter the number in hex adecimal to convert in decimal\ n");
scanf ("% x ", &d);

printf ("decimal % d\ n", d); / / print in decimal


printf ("enter the number in octal to convert in hex adecimal\ n"); 
scanf ("% o", &e);

printf ("hex adecimal % x \ n", e); / / print in hex adecimal


printf ("enter the number in hex adecimal to convert in octal\ n"); 
scanf ("% x ", &f );

printf ("octal % o\ n", f ); / / print in octal 

return 0;
}