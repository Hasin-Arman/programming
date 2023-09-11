#include<stdio.h>

int main(){
    int n;
    printf("please enter a number: ");
    scanf("%d",&n);

    int chok=n;
    int pack=n;

    for(pack=n;pack>=4; ){
        chok=chok+(pack/4);
        pack=(pack/4)+(pack%4);
    }
    printf("Total number of chocolate:%d",chok);
    return 0;
}
