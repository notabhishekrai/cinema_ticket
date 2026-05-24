#include <stdio.h>
#include <string.h>
#include "../include/pay.h"

void pay(){
    char cvv[3], card_no[16], exp_date[4];
    printf("\n\n\nRai Payment Portal \n");
    printf("******************\n");
    while(1){
        printf("Enter your card number (16-digits): ");
        scanf("%s", card_no);
        if(!(strlen(card_no) != 16)){
            printf("Invalid card number\n");
        }else{
            break;
        }
    }
    while(1){
        printf("Enter card expiration date (m/yy): ");
        scanf("%s", exp_date);
         if(!(strlen(exp_date) != 4)){
            printf("Invalid expiration date\n");
        }else{
            break;
        }
    }
    while(1)
    {
        printf("Enter security code (cvv): ");
        scanf("%s", cvv);
        if(strlen(cvv) != 3){
            printf("Invalid security code\n");
        }else{
            break;
        }
    }
    
    printf("\n\n");

   
    
}
