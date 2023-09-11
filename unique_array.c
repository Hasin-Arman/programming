#include<stdio.h>
#include<string.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    char input[n];
    scanf("%s",input);
    int max=122;

    int ara[max+1];
    for(i=0; i<=max; i++)
    {
        ara[i]=0;
    }

    for(i=0; i<n; i++)
    {
        ara[(int)input[i]]+=1;
    }
    int unique=0;
    for(i=0; i<=max; i++)
    {
        if(ara[i] == 1){
        unique++;
       }
    }

    printf("Unique:%d",unique);
    return 0;
}
