//  -: LOGIN :-

#include<stdio.h>
#include<conio.h>

void main(){
    char user_name;
    int password;
    printf("User name :");
    scanf("%s",&user_name);
    printf("Password :");
    scanf("%d",&password);
    if(password==1234){
        printf("Login Succesful");
    }
    else if(password!=1234){
        printf("Login Failed");
    }
}