 /* Write a C program to display a menu in a restaurant and input user choice
Author: Kazi Jawad
*/

#include <stdio.h>
int main(){
printf("----WELCOME TO OUR CAFE----");
printf("\n--Here is our Menu--");
int item;
printf("Choose your item:\n 1.Pizza\n 2.Fried Chicken\n 3.Pepsi\n 4.Biriany");
printf("\nOrder Your Item:");
scanf("%d",&item);

    if(item==1){
        printf("You have ordered a pizza",item);
   }
    else if(item == 2){
        printf("You have ordered a Fried chicken",item);
    }
    else if(item == 3){
        printf("You have ordered a pepsi",item);
    }
    else if(item == 4){
        printf("You have ordered a biriany",item);
    }
    else{
        printf("Your order is not available");
    }


return 0;
}

