#include<stdio.h>
int main()
{
   
    int x,y,z;
 
    printf("Enter the numbers : ");
    scanf("%d %d %d", &x, &y, &z);
   switch(x>y)
   {
    
    switch(x>z)
    {
        case 1:
    printf("The number=%d is largest",x);
    break;
    
    switch(y>x)
    {
        switch(y>z)
        {
        case 1:
        printf("the number=%d is largest",y);
        break;
        default:
        printf("the number=%d is largest",z);
        //all equal
    }}}

   return 0;
   }
}