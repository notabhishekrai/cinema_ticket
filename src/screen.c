#include <stdio.h>
#include "../include/screen.h"

char show_screen(){
    printf("===== Ticket Counter =====\n\n");
    printf("This week's show: Lion King\n");
    printf("Do you want to buy a ticket? (Y/N): ");
    char buy_ticket = getchar();
    return buy_ticket;
}