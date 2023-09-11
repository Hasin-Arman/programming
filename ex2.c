#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int is_one_present(char ara[])
{
    int i;
    for(i=0; i<strlen(ara); i++)
    {
        if(ara[i]=='1'){
            return 1;
        }

    }
    return 0;
}

int is_seven_present(char ara[])
{
    int i;
    for(i=0; i<strlen(ara); i++)
    {
        if(ara[i]=='7'){
            return 1;
        }

    }
    return 0;
}

int is_nine_present(char ara[])
{
    int i;
    for(i=0; i<strlen(ara); i++)
    {
        if(ara[i]=='9'){
            return 1;
        }

    }
    return 0;
}

int main()
{
    char sen[100];
    gets(sen);
    if(is_one_present(sen)==1 && is_seven_present(sen)==1 && is_nine_present(sen)==1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0 ;
}

