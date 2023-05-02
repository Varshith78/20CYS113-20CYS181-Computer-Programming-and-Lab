#include<stdio.h>
int main ()
{
int t; //declaring variables t(time) and temp
double temp;
printf("Enter the number of hours  \n");
scanf("%d", &t);
temp=((4*t*t)/(t+2))-20; //formula to find out temperature
printf("The temperature of freezer is %f",temp);
return 0;
}
