//   -: SIMPLE INTEREST CALCULATOR :-

//   A simple interest calculator is a tool used to calculate the interest earned or paid on a principal amount
//   over a specified period of time, based on a fixed interest rate.

//   Interest (I) = Principal (P) x Rate (R) x Time (T)

//   Principal (P) = $1,000
//   Interest Rate (R) = 5% = 0.05
//   Time (T) = 2 years
//   Interest (I) = $1,000 x 0.05 x 2 = $100



#include<stdio.h>
#include<conio.h>

void main(){
    float interest,principle,rate,time;

    printf("Enter amount:");
    scanf("%f",&principle);
    printf("Enter rate(as percent)");
    scanf("%f",&rate);
    printf("Enter time year:");
    scanf("%f",&time);
    
    interest=principle*rate*time;
    printf("Interest:%.2f",interest);
    
    getch();
}