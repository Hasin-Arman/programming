#include<stdio.h>

int main(){
int x;
scanf("%d",&x);/
int array[x];

for(int i=1;i<=x;i++){
    scanf("%d",&array[i]);
}

for(int i=x;i>=1;i--){
    printf("%d ",array[i]);
}



return 0;
}
