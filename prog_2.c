// EVEN OR ODD CHECKER:

#include<stdio.h>
#include<conio.h>

void main(){
    int num;
    printf("Enter any number :\n");
    scanf("%d",&num);
    if(num%2==0){
        printf("Your number is an even number");
    }
    else{
        printf("Your number is odd number");
    }
    getch();
    }