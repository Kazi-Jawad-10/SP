/*Write a C program to determine whether a given number is Zero (0) or not.
Author: Kazi Jawad
 */

#include <stdio.h>

int main()
{
    int num;


    printf("Enter any number: ");
    scanf("%d", &num);


    if(num > 0)
    {
        printf("Number is POSITIVE");
    }
    if(num < 0)
    {
        printf("Number is NEGATIVE");
    }
    if(num == 0)
    {
        printf("Number is ZERO");
    }

    return 0;
}
