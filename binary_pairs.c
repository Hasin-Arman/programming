#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i,j,t,n,count=0;
    scanf("%d",&t);
    char s [1001];
    for(j=1; j<=t; j++)
    {
        scanf("%d",&n);
        scanf("%s",s);
        i=0;
        while(i<strlen(s))
        {
            if((s[i]=='1' && s[i+1]=='0') || (s[i]=='0' && s[i+1]=='1'))
            {
                count++;
            }
            i++;
        }
        printf("%d\n",count);
        count=0;
    }
    return 0;
}




