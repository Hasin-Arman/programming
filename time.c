#include<stdio.h>>

int main()
{
    int N,M,i,result;
    scanf("%d%d",&N,&M);

    if (N>M)
    {
        for(i=N; i<=23; i++)
        {
            printf("%d ",i);
            if (i>=23)
            {
                for (int j =0; j<=M; j++)
                {
                    printf("%d ",j);
                }

            }
        }
    }
    else
    {
        for (i=N; i<=M; i++)
        {
            if(i>23)
            {
                result=i%N;
                printf("%d ",result);
            }
            else{
                   printf("%d ",i);
            }
        }

    }
    return 0;
}
