#include<stdio.h>
#include<stdio.h>

void keyword(char sen[]){
    int i;
    for(i=0;i<strlen(sen);i++){
        if(i%2==0){
            printf("%c",sen[i]);
        }
        else{
            printf("%c%c",sen[i],sen[i]);
        }
    }

}
int main(){
char sen[100];
gets(sen);
keyword(sen);
return 0;
}

