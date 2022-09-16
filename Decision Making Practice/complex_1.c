/* write a c program that can take input a number and then decide weather the number is positive, negative or neutral
  Author:Kazi Jawad
*/


#include <stdio.h>

float main()
{
    int number;

    printf("Enter the number number: ");
    scanf("%f", &number);

    if (number > 0)
        printf("The number is positive.", number);

    else if (number < 0)
        printf("The number is negative.", number);

    else {

         printf("It is pure is neutral.", number);
    }


    return 0;
}
