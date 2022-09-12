/*If the marks obtained by a student in five different subjects are input through the keyboard,
find out the aggregate marks and percentage marks obtained by the student. Assume that the
maximum marks that can be obtained by a student in each subject is 100.*/

#include<stdio.h>

int main()
{
    int english, structureProgrming, industry, webDevelopment, stuructureLab, total;
    float percentage;
    printf("Enter the marks of English: ");
    scanf("%d", &english);

    printf("Enter the marks of Structure Programing: ");
    scanf("%d", &structureProgrming);

    printf("Enter the marks of Industry: ");
    scanf("%d", &industry);

    printf("Enter the marks of Web Development: ");
    scanf("%d", &webDevelopment);

    printf("Enter the marks of Structure Lab : ");
    scanf("%d", &stuructureLab);

    total = english, structureProgrming, industry, webDevelopment, stuructureLab;

    percentage = total/5;

    printf("\nAggregate marks: %d", total);
    printf("\nPercentage marks: %0.2f %%", percentage);

    return 0;
}
