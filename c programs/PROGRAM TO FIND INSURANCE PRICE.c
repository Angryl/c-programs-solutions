#include<stdio.h> 
#include<conio.h> 
int main()
{

int age,smoking_status,c; char gender;

printf("\nEnter the gender of insurer =" ); 
scanf("%c",&gender);

printf("Enter the age of insurer="); 
scanf("%d",&age);

printf("\nEnter the status of smoking of insurer = "); 
scanf("%d",&smoking_status);

if(age>=20 && age<=30)
{
c=10000;
}
else if(age>=31&&age<=40)
{
c=15000;
}
else if(age>=41&&age>=50)
{
c=20000;
}
else
if(age>=51&&age>=60)
{
c=25000;
}
else if(age<20&&age>60)
{
printf("no insurance ");
}

if(gender=='f' || gender=='F')
{
c=c-(c*10/100);
}
if(smoking_status==1)
{
c=c+(c*10/100);
}
printf("\nInsurance Installment = %d ",c); 
return 0;
}


