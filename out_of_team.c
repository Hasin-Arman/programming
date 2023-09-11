#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,N,K,ara[100],count=0;
    scanf("%d%d",&N,&K);
    for(i=1;i<=N;i++){
        scanf("%d",&ara[i]);
        if(ara[i]<K){
            count++;
        }
    }
   printf("%d",count);
    return 0;
}

