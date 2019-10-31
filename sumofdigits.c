#include<stdio.h>
/* This program computes the sum of the digits of the number entered */

int main ()
{
    int result,sum=0,n,m;
    int div = 10,counter = 0,number;

    printf("Enter the integer:");
    scanf("%i",&number);                      /* Store the sum of the digits into the variable 'number' */
    
    while(result >0){                         /* WHILE LOOP */
        result = number/div;
        div *= 10;          
        counter++;                            /* Count the number of digits in the number */
    }
  
    for(int i=0;i<counter;i++){               /* FOR LOOP */
        m = number%10;
        sum += m;                             /* Calculate the sum of digits in the number */
        number = number/10;
    }
    printf("The sum of the digits:%d \n",sum); /* Print the sum of the digits */
    
    return 0;


}
