/*Write a program to check whether a triangle is valid or not, when the three angles of the
triangle are entered through the keyboard. A triangle is valid if the sum of all the three angles is
equal to 180 degrees.

Author: Kazi Jawad */


#include<stdio.h>
int main()
{
    int a, b, c, sum;
    printf("Enter 1st angles of a triangle: ");
    scanf("%d", &a);
    printf("Enter 2nd angle of a triangle: ");
    scanf("%d",&b);
    printf("Enter 3rd angle of a triangle: ");
    scanf("%d",&c);

    sum = a+b+c;

    if (sum == 180)
        printf("Triangle is valid");
    else
        printf("This is something else said Pythagorean");

    return 0;
}
