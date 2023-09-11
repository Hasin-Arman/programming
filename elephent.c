#include<stdio.h>

int main(){
    int x,steps;
    scanf("%d",&x);
    steps=(x/5);
    if((x%5!=0) &&(x%5<=5)){
        steps+=1;
    }
    printf("%d",steps);

return 0;
}
