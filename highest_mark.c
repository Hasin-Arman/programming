#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,N,ans,ara[100];
    scanf("%d",&N);
    int biggest=0;

    for(i=1;i<=N;i++){
        scanf("%d",&ara[i]);
        if(ara[i]>biggest){
            biggest=ara[i];
        }
    }
    for(i=1;i<=N;i++){
        ans=biggest-ara[i];
         printf("%d ",ans);
    }


    return 0;
}

