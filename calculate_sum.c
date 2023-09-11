#include<stdio.h>

int main(){
int i,n,summ=0;
scanf("%d",&n);
for(i=1;i<=n;i++){
    if(i%2==0){
        summ-=i;
    }
    else
        summ+=i;
}
printf("%d",summ);
return 0;
}
