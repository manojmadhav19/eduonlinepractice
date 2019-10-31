#include<stdio.h>
/* This program computes the sum of the digits of the number entered */

int main ()
{
    int result,sum=0,n,m,d;
    int div = 10,counter = 0,number;

    printf("Enter the integer:");
    scanf("%i",&number);
    
    while(result >0){
        result = number/div;
        div *= 10;          
        counter++;                            /* Count the number of digits in the number */
    }
    printf("Number of digits:%d\n",counter);  

    for(int i=0;i<counter;i++){
        m = number%10;
        sum += m;                             /* Calculate the sum of digits in the number */
        number = number/10;
    }
    printf("The sum of the digits:%d \n",sum);

    return 0;


}