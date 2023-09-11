#include<stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    int ara1[n],result[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&ara1[i]);
    }
    int ara2[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&ara2[i]);
    }
    int temp;
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(ara1[j]>ara1[j+1])
            {
                temp=ara1[j];
                ara1[j]=ara1[j+1];
                ara1[j+1]=temp;
            }
        }
    }
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(ara2[j]<ara2[j+1])
            {
                temp=ara2[j];
                ara2[j]=ara2[j+1];
                ara2[j+1]=temp;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        result[i]=ara1[i]-ara2[i];
    }
    for(i=0; i<n; i++)
    {
        printf("%d ",result[i]);
    }
    return 0;
}
