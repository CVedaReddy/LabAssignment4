#include<stdio.h>
int main()
{
    int num;
    printf("Enter a integer");
    scanf("%d",&num);
    switch((num%2) && (num!=0))
    {
    case 0:
       printf("The number=%d is even",num);
       break;
    case 1:
        printf("the number=%d is odd",num);
        break;
    }
    return 0; 
}