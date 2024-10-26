// FIND THE LARGEST NUMBER :

#include<stdio.h>
#include<conio.h>

void main(){
    int num1,num2,num3;
    printf("Enter three numbers:\n");
    scanf("%d %d %d",&num1,&num2,&num3);

    if(num1 > num2 && num1 > num3){
        printf("first number num1 is greater!");
    }
    else if(num2 > num1 && num2 > num3){
        printf("second number num2 is greater!");
    }
    else if(num3 > num2 && num3 > num1){
        printf("third number num3 is greater!");
    }
    else{
        printf("all numbers are equal!");
    }
    getch();
    }