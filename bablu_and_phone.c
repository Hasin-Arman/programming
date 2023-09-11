#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i,t,x[100],ans,temp[100];
    char ch;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d%c",&x[i],&ch);
        if(x[i]>=0 && x[i]<=60)
        {
            ans=(60-x[i])*1+20*2+20*3;
            temp[i]=ans;

        }
        else if(x[i]>60 && x[i]<=80)
        {
            ans=(80-x[i])*2+20*3;
            temp[i]=ans;
        }
        else
        {
            ans=(100-x[i])*3;
            temp[i]=ans;
        }
    }

    for(i=1; i<=t; i++)
    {
        printf("%d minutes\n",temp[i]);
    }



    return 0;
}

