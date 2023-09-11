#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    if( x&y&z != 0){
        if(x==y&&y==z){
            printf("yes");
        }
        else{
            printf("no");
        }
    }
    else{
        printf("no");
    }
    return 0;
}
