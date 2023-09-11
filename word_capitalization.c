#include<stdio.h>

int main(){
char sen[10002];
scanf("%s",sen);

if(sen[0]>='A' && sen[0]<='Z'){
    printf("%s",sen);
}
else{
    sen[0]-=32;
    printf("%s",sen);
}

return 0;
}
