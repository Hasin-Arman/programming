#include<stdio.h>
#include<string.h>

int main()
{
    char name[102];
    int n,l;
    scanf("%d",&n);
    int i=0;
    while(i<n)
    {
        scanf("%s",name);
        l=strlen(name);
        if(l>10)
        {
            printf("%c%d%c\n",name[0],l-2,name[l-1]);
        }
        else
        {
            printf("%s\n",name);
        }
        i++;
    }


    return 0;
}
