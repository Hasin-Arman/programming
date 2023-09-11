#include<stdio.h>

int main(){
int x,y,z;

printf("Please enter three numbers: ");
scanf("%d %d %d",&x,&y,&z);

if(x+y>z && y+z>x && x+z>y){
    printf("yes");
}

else{
    printf("no");
}

return 0;
}
