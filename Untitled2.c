#include<stdio.h>

int main()
{
    int N,M,i,j;
    scanf("%d",&N);
    i=1;
    while (i<=N){
       if(N%i==0){
        printf("%d ",i);
       }
       i++;
    }

    return 0;
}
