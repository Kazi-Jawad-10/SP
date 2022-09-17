#include<stdio.h>

int main()
{
    int joy, arif;

    printf("Enter the age of Joy: ");
    scanf("%d", &joy);

    printf("Enter the age of Arif: ");
    scanf("%d", &arif);



    if (joy<=arif){

            printf("Joy is the Youngest");
    }
     else if (joy>=arif)
        {

            printf(" Arif is the Youngest");
        }

    else {

        printf("Arif and Joy are same aged");
    }
    return 0;
}
