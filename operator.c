#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char sen[20];
    int x,y,sum1=0,sum2=0,result;
    gets(sen);
    scanf("%d%d",&x,&y);
    for(int i=0;i<strlen(sen);i++){
        if(sen[i]=='+'){
            sum1+=(x+y);
        }
        if(sen[i]=='*'){
            sum2+=(x*y);
        }
    }
     result=sum1+sum2;
    printf("%d",result);
    return 0;
}


