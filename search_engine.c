#include<stdio.h>
int search(int n,int ara[],int num)
{
    int j;
    for(j=1; j<=n; j++)
    {
        if(ara[j]==num)
        {
            return j;
            break;
        }
    }
    return 0;
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int k=1; k<=t; k++)
    {
        int n,num,i,j;
        scanf("%d",&n);
        int ara[n];

        for(i=1; i<=n; i++)
        {
            scanf("%d",&ara[i]);
        }
        scanf("%d",&num);

        int ans= search(n,ara,num);
        if(ans==0)
        {
            printf("Case %d: Not Found\n",k);
        }
        else
        {
            printf("Case %d: %d\n",k,ans);
        }
    }
    return 0;
}
