#include <stdio.h>
int main()
{
    int ch,num1,num2,x;
    printf("Enter the two numbers ");
    scanf("%d %d",&num1,&num2);
    printf("\n 1:addition");
    printf("\n 2:subtraction");
    printf("\n 3: multiplictaion");
    printf("\n 4:quotient ");
    printf("\n 5:remainder");
    printf("\n Enter choice");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        x=num1+num2;
        printf("Sum=%d", x);
        break;
        case 2:
        x=num1-num2;
        printf("difference=%d",x);
        break;
        case 3 :
        x=num1*num2;
        printf("product=%d",x);
        break;
        case 4:
        x=num1/num2;
        printf("quotient=%d",x);
        break;
        case 5:
        x=num1%num2;
        printf("remainder=%d",x);
        break;
        default:
        printf("Invalid choice");
        break;
    }
    return 0;
    }

