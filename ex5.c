#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void shifted (char sen[],int n)
{
    int i;
    for(i=0;i<strlen(sen);i++){
        if(sen[i]>117){
         sen[i]=sen[i]-26;
        }
        sen[i]=sen[i]+n;
    }
    puts(sen);
}

int main()
{
    char sen[100];
    int n;
    gets(sen);
    scanf("%d",&n);
    shifted(sen,n);
    return 0;
}


