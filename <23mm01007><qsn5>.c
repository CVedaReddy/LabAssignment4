#include<stdio.h>
int main()
{
    int num;
    printf("Enter a three digit number between 100 to 999");
    scanf("%d",&num);
    int x= num/100;
    int y=(num-(x*100))/10;
    int z =(num-(x*100)-(y*10));
    int t=(x*x*x)+(y*y*y)+(z*z*z);
    switch(t == num)
    {
        case 1:
        printf("yes, the number = %d is Armstrong number",num);
        break;
        case 0:
            printf("No the number = %d is not an Armstrong number ",num);
       break; }
        return  0;
}