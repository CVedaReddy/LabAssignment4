#include<stdio.h>
int main()
{
    int ch;
    printf("1 :Monday");
    printf("\n 2:Tuesday");
    printf("\n3:Wednesday");
    printf("\n4:Thursday");
    printf("\n5:Friday");
    printf("\n6:Saturday");
    printf("\n7:Sunday");
    printf("\n Enter choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        printf("\n Monday");
        break;

        case 2:
         printf("\nTuesday");
         break;
         case 3:
        printf("\nWednesday");
    break;
    case 4 :
    printf("\nThursday");
    break;
    case 5:
    printf("\nFriday");
    break;
    case 6:
    printf("\nSaturday");
    break;
    case 7:
    printf("\nSunday");
    break; 
    default:
    printf("Invalid choice");
    break;
    } 
    return 0;
}


    