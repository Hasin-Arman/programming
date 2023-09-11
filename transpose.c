#include<stdio.h>

int main()
{
    int ara[3][3],i,j;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&ara[i][j]);
        }
    }


     for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ",ara[j][i]);
        }
        printf("\n");
    }

    return 0 ;
}
