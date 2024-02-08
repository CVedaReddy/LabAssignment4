#include<stdio.h>
int main()
{
  int score;
 float balance,interest;
    printf("Enter credit score and balance ");
 scanf("%D%f",&score,&balance);
    if(score<600)
   { 
    interest=0.15*balance;
    printf("Interest is %f",interest);
    }
      else if(score<750 && score>=600)
   { 
    interest=0.12*balance;
    printf("Interest is %f",interest);
    }
     else if(score>=750)
   { 
    interest=0.1*balance;
    printf("Interest is %f",interest);
    }
return 0 ;
} 
