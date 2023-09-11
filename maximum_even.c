#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n,max,sum;
    scanf("%d",&n);
    int ara[n];

    for(int i=0;i<n;i++){
        scanf("%d",&ara[i]);
    }

    max=ara[0];
    for(int i=0;i<n;i++){
        if(ara[i]>max && ara[i]%2==0){
            max=ara[i];
        }
    }

      for(int i=0;i<n;i++){
        if((ara[i]+ara[i+1])){
            sum=ara[i] + ara[i+1];
        }
         printf("%d\n",sum);
    }
    return 0;
}







