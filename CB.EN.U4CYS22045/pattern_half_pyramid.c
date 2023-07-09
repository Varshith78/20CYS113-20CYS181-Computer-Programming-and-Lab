#include <stdio.h>
int main()
{
    int r;
    scanf("%d",&r);
    if(r>0 && r<25)
    {
        for(int i=1;i<=r;i++)
    {
        for(int j=0;j<i;j++)
        {
            printf("* ");
    }
    printf("\n");
    }
    }
    else{
        printf("Invalid Input");
    
    }

    return 0;
}
