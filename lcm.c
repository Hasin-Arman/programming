#include <stdio.h>


int main()
{
    int n,m,largest,i,lcm;
    scanf("%d%d",&n,&m);
    largest=1;
    for(i=2;i<=n;i++){
        if(n%i==0 && m%i==0){
            if(i>largest){
                largest=i;
            }
        }
    }
    lcm=(n*m)/largest;
    printf("%d",lcm);

    return 0;
}

