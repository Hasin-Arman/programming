#include<stdio.h>

int main()
{
    int i,x,count=0,test;
    scanf("%d",&x);
    int array[x];

    for(int i=0; i<x; i++)
    {
        scanf("%d",&array[i]);
    }
    test=array[0];
    for(i=0; i<x; i++)
    {
        if(test==array[i])
        {
            count++;
        }
    }
    if(count>1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}


