#include<stdio.h>
#include<string.h>

int main(){
char sen[100];
int i;
gets(sen);

for(i=0; i<strlen(sen); i++){
    if(sen[i]>='A' && sen[i]<='Z'){
        sen[i]+=32;
    }
    else{
        sen[i]-=32;
    }
}
puts(sen);
return 0 ;
}
