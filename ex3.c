#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int n,k,i,ara[100];
    scanf("%d%d",&n,&k);

    for(i=1;i<=n;i++){
            if(i%2==0){
                printf("%d ",i);
            }
    }


    for(i=1;i<=n;i++){
            if(i%2!=0){
                printf("%d ",i);
            }
    }


    return 0 ;
}

