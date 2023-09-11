#include<stdio.h>

int main(){
int x,q,n;
scanf("%d",&x);
int array[x];


for(int i=0;i<x;i++){
    scanf("%d",&array[i]);
}

scanf("%d",&q);
int query[2];

for(int i=0;i<q;i++){
  for(int j=0;j<2;j++){
    scanf("%d",&query[j]);
    if(j==1){
        array[query[0]]=array[query[0]]+query[1];
    }
  }
}

for(int i=0;i<x;i++){
    printf("%d ",array[i]);
}
return 0;
}

