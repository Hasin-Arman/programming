#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i,l,j,n,rolls[25],k,temp[25];
    scanf("%d%d",&n,&k);
    for(i=0; i<n; i++)
    {
        scanf("%d",&rolls[i]);
    }
    for(j=k; j<n; j++)
    {
        printf("%d\n",rolls[j]);

    }
    for(l=0; l<k; l++)
    {
        printf("%d\n",rolls[l]);
    }
    return 0;
}
