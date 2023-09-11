#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int j,i,t,x[100],count;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&x[i]);
        for(j=2; j<=x[i]-1; j++)
        {
            if(x[i]%j!=0)
            {
                count++;
                count=0;
            }
        }
        if(count>0)
        {
            printf("No\n");
        }
        else
        {
            printf("No\n");
        }

    }

    return 0;
}




