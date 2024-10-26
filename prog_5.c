//  -: TEMPERATURE CONVERTER :-

#include<stdio.h>
#include<conio.h>

void main(){
    int choice;
    float temp;
    printf("\tOPTIONS\n1:Celcius to Fahrenhiet.\n2:Fehrenhiet to Calcius.\n\t   :");
    scanf("%d",&choice);
    if(choice==1){
    printf("Enter tempreture in celcius:");
    scanf("%f",&temp);
    printf("%f Celcius is about %f Fahrenhiet",temp,(temp * 9 / 5)+ 32);
    }
    else if(choice==2){
    printf("Enter tempreture in celcius:");
    scanf("%f",&temp);
    printf("%f Fahrenhiet is about %f Calcius",temp,((temp-32)*5/9));
    }
    getch();
}