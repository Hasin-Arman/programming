#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i,sum=0;
    int digit,result;
    scanf("%d", &n);
    for(i=1;i<=5;i++){
        //digit=pow(10,i);
        result=n % 10;
        n=n-result;
        printf("%d\n",result);
        //sum=sum+digit;
    }
    //printf("%d",digit);
    return 0;
}
