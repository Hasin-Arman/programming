#include<stdio.h>

int main(){
int n,i,x,j,count=0,ans=0;
scanf("%d",&n);
for(i=1;i<=n;i++){
    for(j=1;j<=3;j++){
        scanf("%d",&x);
        if(x==1){
            count+=x;
        }
    }
     if(count>=2){
            ans++;
        }
        count=0;
}

    printf("%d",ans);


return 0;
}

