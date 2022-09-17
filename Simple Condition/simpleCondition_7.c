/* Write program to determine whether a number is negative or not.


Author:Kazi Jawad*/

#include <stdio.h>
int main() {
    float num;
    printf("Enter a number: ");
    scanf("%f", &num);
    if (num >= 0.0) {
            printf("You entered a positive number.");
        }
        else
            printf("You entered a negative number.");

    return 0;
}
