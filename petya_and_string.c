#include<stdio.h>
#include<string.h>

int main()
{
    char s[100],t[100];
    int l,i;
    scanf("%s%s",s,t);
    l=strlen(s);
    for(i=0; i<l; i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i]+=32;
        }
        if(t[i]>='A' && t[i]<='Z')
        {
            t[i]+=32;
        }

    }
    int same=1;
    for(i=0; i<l; i++)
    {
        if(s[i]<t[i])
        {
            printf("-1");
            same=0;
            break;
        }
        if(t[i]<s[i])
        {
            printf("1");
            same=0;
            break;
        }
    }
    if(same==1)
    {
        printf("0");
    }
    return 0;
}
