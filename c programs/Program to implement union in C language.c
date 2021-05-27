#include< stdio.h> 
#include< conio.h> 

struct student{
char name[5 0]; 
int age;
int sem; 
int marks;
} s;

union student1{
char name[5 0];
 int age;
int sem;
 int marks;
} s1;

void main(){
printf("\ nenter the data of student in structure ");
printf("\ nEnter N ame:");
fflush(stdin);
gets(s.name);
printf("Enter A g e: ");
scanf("% d", & s.ag e);
printf("Enter Semester: "); 
scanf("% d", & s.sem); 
printf("Enter Marks: "); 
scanf("% d", & s.marks);
printf("\ nenter the data of student in union "); 
printf("\ nEnter N ame:");
fflush(stdin);                  
gets(s1.name); 
printf("Enter A g e: "); 
scanf("% d", & s1.ag  e); 
printf("Enter Semester: ");
scanf("% d", & s1.sem); 
printf("Enter Marks: "); 
scanf("% d", & s1.marks);
printf("\ nname ag e semester marks\ n");
printf("\ n% s %   d %   d %   d - - - - - - >   structure", s.name, s.ag e,s.sem, s.marks); 
printf("\ n% s % d % d %   d - - - - - - >   union", s1.name, s1.ag  e, s1.sem, s1.marks);
}

