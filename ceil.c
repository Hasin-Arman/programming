#include <stdio.h>

int main()
{
int n,i;
scanf("%d",&n);
int count;
for(i=2;i<=n-1;i++){
    if(n%i==0){
        count=1;
    }
}
if(count==1){
    printf("Composite");
}
else{
    printf("Prime");
}
   return 0;
}
