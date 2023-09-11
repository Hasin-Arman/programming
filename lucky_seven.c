#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int t,result=1,length;
    scanf("%d",&t);
    char s[21];
    for(int i=1; i<=t; i++)
    {
        scanf("%s",s);
        length=strlen(s);
        for(int j=0; j<length; j++)
        {
            if(s[j]!=s[length-j-1])
            {
                result=0;
            }
        }

        if(result==1 && length<=7)
        {
            printf("Case #3: %s\n",s);
        }

        else if(result==1 && length>7)
        {
            printf("Case #2: %c%d%c\n",s[0],length-2,s[length-1]);
        }
        else if(result==0)
        {
            printf("Case #1: Not Palindrome\n");
        }
    }
    return 0;
}





