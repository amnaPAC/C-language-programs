//    -: LEAP YEAR CHECKER :-
#include<stdio.h>
#include<conio.h>

void main(){
    int year;
    printf("Enter any year:");
    scanf("%d",&year);
    if(year%4==0){
        printf("This is a leap year.",&year);
    }
    else{
        printf("This is not a leap year.",&year);
    }
    getch();
}