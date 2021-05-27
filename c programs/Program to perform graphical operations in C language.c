#include< stdio.h>
#include< conio.h>
#include<graphics.h>

]void main(){
int gd =DETECT, gm;
initg raph(&  gd, &gm, "c:\ \ turboc3\ \ bg i");


line(300, 100, 200, 200);
line(300, 100, 4 00, 200);
line(200, 200, 4 00, 200);

circle(300, 16 0, 4 0);
rectang  le(200, 100, 4  00, 200); 
getch();

closeg raph();
}
