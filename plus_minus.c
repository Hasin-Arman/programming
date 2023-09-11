#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n,length,i,count=1;
    scanf("%d",&n);
    char signs[n+1];
    scanf("%s",signs);
    length=strlen(signs);
    for(i=0;i<length;i++){
        if((signs[i]=='+' && signs[i+1]=='+') || (signs[i]=='-' && signs[i+1]=='-')){
            count++;
        }
    }
        printf("%d",count);
        return 0;
    }







