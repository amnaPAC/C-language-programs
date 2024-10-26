#include<stdio.h>
#include<conio.h>
void main()
{
int PF,CF,DM,total_num;
printf("MARKSHEET\n");
printf("Enter PF marks:");
scanf("%d",&PF);
printf("Enter CF marks:");
scanf("%d",&CF);
printf("Enter DM marks:");
scanf("%d",&DM);
total_num=PF+CF+DM;
float average=(total_num*100/300);
printf("percentage:%.2f\n",average);

if(average>=90)
{
printf("grade:A");
}
else if(average>=80)
{
printf("grade:B");
}
else if(average>=70)
{
printf("grade:C");
}
else if(average>=60)
{
printf("grade:D");
}
else
{
printf("grade:F");
}
getch();
}