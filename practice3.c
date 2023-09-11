#include<stdio.h>

int main()
{
    int i,n,ara[100];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }

    for(i=0; i<n; i++)
    {
        int* p=&ara[i];
        printf("%d ",*p);
    }

    return 0;
}

