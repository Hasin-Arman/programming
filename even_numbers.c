#include<stdio.h>
void even_numbers(){
    int n,i,summ=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==0)
          printf("%d ",i);
    }
}

int main(){
int t,i,n;
scanf("%d",&t);
for(i=1;i<=t;i++){
    even_numbers();
}
return 0;
}
