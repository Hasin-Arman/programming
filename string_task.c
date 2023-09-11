#include <stdio.h>
#include<string.h>

int main()
{
    char sen[100],l,i;
    scanf("%s",sen);
    l=strlen(sen);

    for(i=0; i<l; i++)
    {
        if(sen[i]>='A' && sen[i]<='Z')
        {
            sen[i]+=32;
        }
        if(sen[i]=='a' || sen[i]=='e' || sen[i]=='i' || sen[i]=='o' || sen[i]=='u'|| sen[i]=='y')
        {
            continue;
        }
        else
        {
            printf(".%c",sen[i]);
        }
    }
    return 0;
}

