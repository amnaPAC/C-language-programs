// BASIC CALCULATOR

#include<stdio.h>
#include<conio.h>

void main(){
    int num1,num2;
    char operation;
    printf("Enter two numbers:\n");
    scanf("%d %d",&num1,&num2);
    printf("which operation you want to do(+,-,*,/):");
    scanf(" %c",&operation);
    
    if(operation=='+'){
        printf("sum of two numbers is:%d\n",num1+num2);
    }
    else if(operation=='-'){
        printf("difference of two numbers is:%d\n",num1-num2);
    }
    else if(operation=='*'){
        printf("product of two numbers is:%d\n",num1*num2);
    }
    else if(operation=='/'){
        if (num2!=0){
        printf("sum of two numbers is:%d\n",num1/num2);
        }
        else{
            printf("division by zero is not allowed");
        }
    }
    else{
        printf("plz enter correct operation!");
    }
    }