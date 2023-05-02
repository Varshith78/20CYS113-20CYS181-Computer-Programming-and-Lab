#include<stdio.h>
#define REWARD_PER_KM 5.0;
int main ()
{
int begred,endred;int tm; //begred refers to beginning reading and endred refers to end reading
printf("enter the begnning reading\n");
scanf("%d",&begred);
printf("enter the ending reading\n");
scanf("%d",&endred);
tm=(endred-begred)*REWARD_PER_KM;
printf("your reward is %d", tm);
return 0;
}
