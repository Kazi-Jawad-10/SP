/*Any integer is input through the keyboard. Write a program to find out whether itis an odd
number or even number.
Author: Kazi Jawad */

#include<stdio.h>

int main()
{
    int num;

    printf("Enter any integer: ");
    scanf("%d", &num);

    if(num%2==0)
    {
       printf("%d is  Even Number", num);
    }
    else
    {

       printf("%d is Odd Number", num);
    }

    return 0;
}
