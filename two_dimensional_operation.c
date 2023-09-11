#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int N,M,i,j;
    scanf("%d%d",&N,&M);
    int ara[N+1][M+1];

    for(i=1; i<=N; i++)
    {
        for(j=1; j<=M; j++)
        {
            scanf("%d",&ara[i][j]);
        }
    }

    for(i=1; i<=N; i++)
    {
        for(j=1; j<=M; j++)
        {
            if(ara[i][j]==i && ara[i][j]==j)
            {
                ara[i][j]=ara[i][j]+3;
            }
            else if(ara[i][j]==i)
            {
                ara[i][j]=ara[i][j]+2;
            }
            else if(ara[i][j]==j)
            {
                ara[i][j]=ara[i][j]+1;
            }
        }
    }

    for(i=1; i<=N; i++)
    {
        for(j=1; j<=M; j++)
        {
            printf("%d ",ara[i][j]);

        }
        printf("\n");
    }
    return 0;
}


