#include<stdio.h>
int main()
{
int volume,tm;//here tm is time in minutes
double th,infusionrate;//here th is time in hours
		       //
printf("please enter thr volume in ml\n");
scanf("%d", &volume);

printf("please enter the time in minutes\n");
scanf("%d", &tm);

th=(tm)/60;  //converting time in minutes to hours

infusionrate=volume/th;

printf("the infusion rate is %f", infusionrate);
return 0;
}

