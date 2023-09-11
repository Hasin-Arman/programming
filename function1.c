#include<stdio.h>
#include<math.h>

void numbers(int n);

int main()
{
    int n,i;
    scanf("%d",&n);
    numbers(n);
    return 0;
}

void numbers(int n)
{
    int i;
    if(n>0)
    {
        for(i=n; i>=-n; i--)
        {
            printf("%d ",i);
        }
    }
    else
    {
        for(i=n; i<=abs(n); i++)
        {
            printf("%d ",i);
        }
    }
}
