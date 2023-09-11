#include<stdio.h>

int main(){
int n;
int w,sum=0;
printf("Enter number of persons: ");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    scanf("%d",&w);
    sum =sum+w;
}
printf("The sum is %d",sum);
return 0;
}


