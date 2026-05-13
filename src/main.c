#include <stdio.h>
#include "../include/screen.h"
#include "../include/ticket.h"

int main(){
    char buy_ticket = show_screen(); 

    if(buy_ticket == 'y' || buy_ticket == 'Y'){
        ticket();
    }else{
        printf("Have a nice day :)\n");
    }
    
    

    return 0;
}