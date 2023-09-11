#include<stdio.h>

int main(){
int n,i,ans;
int ara[100];
int ec=0,oc=0;
scanf("%d",&n);

for(i=1;i<=n;i++){
    scanf("%d",&ara[i]);
}

for(i=1;i<=n;i++){
    if(ara[i]%2==0){
        ec++;
    }
    else{
        oc++;
    }
}

if(ec==1){
    for(i=1;i<=n;i++){
        if(ara[i]%2==0){
            ans=i;
        }
    }
}

if(oc==1){
    for(i=1;i<=n;i++){
        if(ara[i]%2!=0){
            ans=i;
        }
    }
}
printf("%d",ans);


return 0;
}



