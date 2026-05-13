#include <stdio.h>
#include "../include/ticket.h"

int ticket_count = 0, total_ticket_price;
void ticket(){
    printf("\n| Ticket Price - Rs. 250 |\n");
    printf("Enter number of tickets: ");
    scanf("%d", &ticket_count);
    total_ticket_price = ticket_count * 250;
    printf("Net Total: Rs.%d\n", total_ticket_price);
}