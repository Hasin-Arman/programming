#include<stdio.h>

int main()
{
    int i,j,n,t;
    char ara[]= {'A','B','C','D','E','F','G','H','I'};
    int count;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        count=0;
        scanf("%d",&n);
        while(n!=0)
        {
            int ans=n%10;
            printf("%c",ara[ans-1]);
            n=n/10;
        }

    }
    return 0;
}

