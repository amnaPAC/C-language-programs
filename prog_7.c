// DISCOUNT CALCULATOR

#include<stdio.h>
#include<conio.h>

void main(){
    int total_shopping_amount;
    float discount_price;
    printf("Plz,Enter your total shopping amount:");
    scanf("%d",&total_shopping_amount);
    if(total_shopping_amount>5000){
        discount_price=total_shopping_amount*0.20-total_shopping_amount;
        printf("\nprice after 20%% discount is :%.2f",discount_price);
    }
    else if(total_shopping_amount>3000 && total_shopping_amount<5000){
        discount_price=total_shopping_amount*0.10-total_shopping_amount;
        printf("price after 10%% discount is : %.2f",discount_price);
    }
    else{
        printf("no discount on un der 3000 shopping");
    }
    getch();
}