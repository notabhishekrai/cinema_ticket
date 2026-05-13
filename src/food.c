#include <stdio.h>
#include "../include/food.h"
#include "../include/ticket.h"

int get_food(){
    int food_item, total_price = 0;
    printf("\n--- Food Menu ---\n");
    printf("1) Burger (Rs. 250)\n");
    printf("2) Nachos (Rs. 350)\n");
    printf("3) Nuggets (Rs. 80)\n");
    printf("4) Diet Coke (Rs. 100)\n\n");
    printf("Enter (1-4) to add food to card (ctrl+d to complete): ");
    while((scanf("%d", &food_item) != EOF)){
        if(food_item == 1){
            total_price += 250;
        }else if(food_item == 2){
            total_price += 350;
        }else if(food_item == 3){
            total_price += 100;
        }else if(food_item == 4){
            total_price += 80;
        }else{
            printf("No such items!\n");
            continue;
        }

    }

    printf("\n\nFood Total: %d\n", total_price);
    
    return total_price;
}