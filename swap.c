#include<stdio.h>
void swap_value(int n,int ara[],int* p,int* q)
{
    int i,temp;
    temp=ara[*p];
    ara[*p]=ara[*q];
    ara[*q]=ara[*p];
}

int main()
{
    int i,q,l,r,n,j,ara[1000];
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&ara[i]);
    }
    scanf("%d",&q);
    for(j=1; j<=q; j++)
    {
        scanf("%d%d",&l,&r);
        swap_value(n,ara,&l,&r);
    }


    for(i=1; i<=n; i++)
    {
        printf("%d ",ara[i]);
    }

    return 0;
}
