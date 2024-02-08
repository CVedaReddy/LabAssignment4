#include<stdio.h>
int main()
{
int age;
float fare;
printf("Enter the age");
scanf("%d",&age);
if(age<5)
{
    printf("Ticket fare: 0 rupees");
} 
else if((age>=5) && (age<=12))
{
    printf("Ticket fare: 20 rupees");
}
else if ((age<=13) && (age<=59))
{
    printf("Ticket fare: 50 rupees");
}
else 
{
    printf("Ticket fare: 40 rupees ");
}
return 0;
}
