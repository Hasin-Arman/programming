#include<stdio.h>
int prime_count(int n,int ara[])
{
    int i,flag=0;
    for(i=0; i<n; i++)
    {
        if(ara[i]%2!=0)
        {
            flag++;
        }
    }
    return flag;
}

float avarage_even(int* n,int* ara[])
{
    int i,flag=0,summ=0;
    for(i=0; i<*n; i++)
    {
        if(*ara[i]%2==0)
        {
            summ+=*ara[i];
            flag++;
        }
    }
    float ans=summ/flag;
    return ans;
}

int main()
{
    int i,n,ara[100];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }
    int* p=&n;
    int* q=&ara;
    printf("Prime numbers:%d\n",prime_count(*p,*q));
   // printf("Average of all even integers:%0.2f",avarage_even(n,ara));
    return 0;
}

