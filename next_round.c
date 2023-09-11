#include<stdio.h>

int main(){
int n,k,i;
int ara[50];
int count=0;
scanf("%d%d",&n,&k);

for(i=1;i<=n;i++){
    scanf("%d",&ara[i]);
}

for(i=1;i<=n;i++){
    if(ara[i]>=ara[k] && ara[i]>0){
        count++;
    }
}

printf("%d",count);


return 0;
}


