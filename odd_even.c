#include<stdio.h>
int sum_even_odd(int n,int ara[]){
    int i,even_summ=0,odd_summ=0;
    for(i=1;i<=n;i++){
        if(ara[i]%2==0 && i%2==0){
            even_summ+=(ara[i]+i);
        }
        else if(ara[i]%2!=0 && i%2!=0){
            odd_summ+=(ara[i]+i);
        }
    }
    int ans=even_summ+odd_summ;
    return ans;
}

int main(){
int i,n,ara[1000];
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&ara[i]);
    }
    printf("%d",sum_even_odd(n,ara));
return 0;
}

