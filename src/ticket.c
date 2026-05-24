#include <stdio.h>
#include "../include/ticket.h"
#include "../include/food.h"
int ticket_count = 0, total_ticket_price, total_food_price = 0, net_total;
float grand_total;
char need_food;
void ticket(){
    
    printf("\n| Ticket Price - Rs. 250 |\n");
    printf("Enter number of tickets: ");
    scanf("%d", &ticket_count);
    total_ticket_price = ticket_count * 250;
    printf("Net Total: Rs.%d", total_ticket_price);
    printf("\n");
    printf("\nDo you need food? (Y/N): ");
    scanf(" %c", &need_food);

    if(need_food == 'y' || need_food == 'Y'){
        total_food_price = get_food();
    }

    printf("Ticket Total: Rs.%d\n", total_ticket_price);
    printf("Net Total: Rs.%d\n", total_ticket_price + total_food_price);
    net_total = total_food_price + total_ticket_price;
    printf("VAT (13%%): Rs.%.2f\n", net_total * 0.13);
    printf("______________\n\n");
    grand_total = net_total + (net_total * 0.13);
    printf("Grand Total: Rs%.2f\n", grand_total);

}
