#include<stdio.h>
int divisible_three(int n,int ara[]){
    int i,count=0;
    for(i=0;i<n;i++){
       if(ara[i]%3==0 && ara[i]%5!=0){
            count++;
       }
    }
    if(count>0){
        return count;
    }
    else
        return -1;
}

int divisible_five(int n,int ara[]){
    int i,count=0;
    for(i=0;i<n;i++){
       if(ara[i]%5==0 && ara[i]%3!=0){
            count++;
       }
    }
    if(count>0){
        return count;
    }
    else
        return -1;
}

int both_divisible(int n,int ara[]){
     int i,count=0;
    for(i=0;i<n;i++){
       if(ara[i]%5==0 && ara[i]%3==0){
            count++;
       }
    }
    return count;
}
int main(){
int i,n,ara[1000];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }
    int ans=divisible_three(n,ara)+divisible_five(n,ara)+both_divisible(n,ara);
    if(ans<0){
        printf("-1");
    }
    else{
        printf("%d",ans);
    }

return 0;
}

