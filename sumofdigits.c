#include<stdio.h>
/* This program computes the sum of the digits of the number entered */

 int main(){
    /* This program computes the sum of the digits of the number entered */

    int a,b,sum=0;
    
    printf("Enter the number:");
    scanf("%d",&a);                              /* Store the sum of the digits into the variable 'a' */

    while (a>0){                                 /* WHILE LOOP */
    b = a%10;                                               
    sum += b;
    a = a/10;  
    }

    printf("The sum of the digits:%d \n",sum);
    return 0;
} 
