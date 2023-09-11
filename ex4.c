#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int median (int ara[],int n)
{
    int i,temp,j,position,mean;
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            if(ara[j]>ara[j+1])
            {
                temp=ara[j];
                ara[j]=ara[j+1];
                ara[j+1]=temp;
            }
        }
    }
    if(n%2 != 0){
        position=((n+1)/2)-1;
        printf("The median is: %d",ara[position]);
    }
    else{
        position=((n+1)/2)-1;
        mean=(ara[position] + ara[position+1])/2;
        printf("The median is: %d",mean);
    }
}

int main()
{
    int i,n,ara[100];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }
    median(ara,n);
    return 0;
}

