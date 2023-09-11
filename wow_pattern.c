#include<stdio.h>

int main()
{
    int rows,i,k,j;

    scanf("%d",&rows);

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=rows-i; j++)
        {
            printf(" ");
        }
        if(i%2!=0)
        {
            for(k=1; k<=2*i-1; k++)
            {
                printf("^");
            }
        }
        else
        {
            for(k=1; k<=2*i-1; k++)
            {
                printf("*");
            }
        }

        printf("\n");
    }
    return 0;
}
