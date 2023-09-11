#include<stdio.h>
void sum_of_zeros(int n,int ara[]){
    int i,summ=0;
    for(i=0;i<n;i++){
        if(ara[i]%10==0){
            summ+=ara[i];
        }
    }

    printf("%d",summ);
}


int main(){
 int i,n,ara[100];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }
    sum_of_zeros(n,ara);
return 0;
}
