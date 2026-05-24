#include <stdio.h>
#include <string.h>
#include "../include/screen.h"
#include "../include/ticket.h"
#include "../include/food.h"
#include "../include/pay.h"



int main(){
    char buy_ticket = show_screen(); 

    FILE *fp;

    fp = fopen("bill.txt", "w");

    if(buy_ticket == 'y' || buy_ticket == 'Y'){
        ticket();
    }else{
        printf("Have a nice day :)\n");
        return 0;
    }

    pay();

    fprintf(fp, "===== CINEMA RECEIPT =====\n");
    fprintf(fp, "Ticket Total: Rs.%d\n", total_ticket_price);
    fprintf(fp, "Food Total: Rs.%d\n", total_food_price);
    fprintf(fp, "Grand Total: Rs.%.2f\n", grand_total);

    fclose(fp);

    printf("\n\nYour ticket is ready to print!");
    

    return 0;
}