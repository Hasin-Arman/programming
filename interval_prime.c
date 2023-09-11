#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void print_prime(){
    int i,j,l,r;
    int flag;
    scanf("%d%d",&l,&r);
    for(i=l; i<=r; i++)
    {
        flag=0;
        for(int k=2; k<i; k++)
        {
            if(i%k==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("%d ",i);
        }
    }

}

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        print_prime();
    }

    return 0;
}



