#include<stdio.h>

int main(){
int n;
printf("please enter a number: ");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    printf("The number is %d and the square of the number is %d\n",i,i*i);
}
return 0;
}
