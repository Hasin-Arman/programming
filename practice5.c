#include<stdio.h>
#include<string.h>
void lower_to_upper(char ara[])
{
    int i;
    for(i=0;i<strlen(ara);i++){
        if(ara[i]%2==0){
            ara[i]-=32;
        }
    }

    puts(ara);
}


int main()
{
    char sen[100];
    gets(sen);
    lower_to_upper(sen);
    return 0;
}

