# include< stdio.h> 
#include< string .h >

struct student { 
char name[20];
int ag e;
int sem; int marks;
};

void inputstruct(struct student s[], int n){
 int i;
struct student *ptr;
 ptr=s;

for(i=0; i< n; i++){
 printf("\ nStudent %d", i+1); 
printf("\ nEnter N ame:");        
fflush(stdin); g ets(ptr- > name); 
printf("Enter A g e: "); 
scanf("%   d", &    ptr- > ag e); 
printf("Enter Semester: "); 
scanf("% d", & ptr- > sem); 
printf("Enter Marks: "); 
scanf("% d", & ptr- > marks);
ptr++;
}

void display Struct(struct student s[10], int n) 
int i;
struct student *ptr; 
ptr=s;
for(i=0; i< n; i++){ 
printf("\ n\ nStudent %   d", i+1);
printf("\ nN   ame: %    s", ptr- > name); 
printf("\ nA g e: %   d", ptr- > ag e); 
printf("\ nSemester: % d", ptr- > sem); 
printf("\ nMarks: % d", ptr- > marks); 
ptr++;
}

void sum(struct student s[], int n){
 int i, sum=0;
struct student *ptr; 
ptr=s;
for(i=0; i< n; i++){
sum+= ptr- > marks 
ptr++;
}
printf("\ nT otal marks of all student: % d", sum)

void maximum(struct student s[], int n)
{ int i, maximum=0;
char max_ name[20]; 
struct student *ptr; 
ptr=s;
for(i=0; i< n; i++){
if(maximum< ptr- > marks){
maximum=ptr- > marks;
strcpy (max_ name, ptr- > name)
}
ptr++;

printf("\ nN ame O f Student W	ith Maximum Marks: % s with %   d", max_ name, maximum);

int main()
{
struct student s[10]; int n;
printf("enter the number of student");
scanf("% d", & n); 
inputstruct(s, n); 
displayStruct(s, n); 
sum(s, n);
maximum(s, n); 
return 0;
}
