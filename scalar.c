#include<stdio.h>

int main()
{
    int row,col,flag=1;
    scanf("%d%d",&row,&col);
    int ara[row][col];

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d",&ara[i][j]);
        }
    }
    if(row==col)
    {
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(i==j)
                {
                    if(ara[i][j]!=1)
                    {
                        flag =0;
                    }
                    continue;
                }
                if(ara[i][j]!=0)
                {
                    flag=0;
                }
            }
        }
        if(flag==1)
        {
            printf("Identity");
        }
        else
        {
            printf("Not Identity");
        }
    }
    else
    {
        printf("Not Identity");
    }

    return 0;
}
