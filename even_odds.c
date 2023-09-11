#include<stdio.h>
#include <math.h>

int main(){
long long int result,temp,position,k;
double value,n;
scanf("%lf%lld",&n,&k);
value=n/2;
result=ceil(value);

if(k<=result){
    temp=2*k-1;
    printf("%lld",temp);
}

else{
    position=k-result;
    temp=2*position;
    printf("%lld",temp);
}
return 0;
}
