#include<stdio.h>
int main()
{ int n;
printf("Enter the value of n: \n");
scanf("%d",&n); 
//if the number is even then the output is 1

//if the number is odd then the output is 0

printf("%d",n%2==0);
return 0;
}
