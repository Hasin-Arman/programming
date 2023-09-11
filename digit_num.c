#include <stdio.h>


int main()
{
    long long int a;
    int sum=0,digits;
    scanf("%lld",&a);

    while(a!=0){
        digits  = a%10;
        a=a/10;
        sum=sum+digits;
    }
    printf("%d",sum);

    return 0;

}

