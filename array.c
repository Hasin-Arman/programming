#include<stdio.h>
#include<string.h>
void print_string(char sen[])
{
    int i;
    int ara[123];
    char new_array[100];
    for(i=97; i<=122; i++)
    {
        ara[i]=0;
    }

    for(i=0; i<strlen(sen); i++)
    {
        ara[(int)sen[i]]+=1;
    }

    for(i=97; i<=122; i++)
    {
        if(ara[i]>=1)
        {
            for(int j=1; j<=ara[i]; j++)
            {
                printf("%c",i);
            }
        }
    }
}

int main()
{
    char sen[50];
    gets(sen);
    print_string(sen);
}
