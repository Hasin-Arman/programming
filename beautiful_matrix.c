#include<stdio.h>
#include<stdlib.h>
int main()
{
    int ara[5][5];
    int i,j,x,y,row,col;
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            scanf("%d",&ara[i][j]);
            if(ara[i][j]==1)
            {
                x=i;
                y=j;
            }
        }
    }
    {
        row=abs(x-2);
        col=abs(y-2);
    }

    int ans=row+col;
    printf("%d",ans);
    return 0;
}
