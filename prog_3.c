// ELIGIBILITY FOR VOTING :

#include<stdio.h>
#include<conio.h>

void main(){
    int age;
    printf("Enter your age:\n");
    scanf("%d",&age);
    
    if(age<18){
        printf("you are not eligible for vote!");
    }
    else{
        printf("you are eligible");
    }
    getch();
}

