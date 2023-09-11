#include<stdio.h>
#include<string.h>

void descending(char ara[]){
    int i,j,temp;
    for(i=0;i<strlen(ara)-1;i++){
       for(j=0;j<strlen(ara)-i-1;j++){
            if(ara[j]<ara[j+1]){
                temp=ara[j];
                ara[j]=ara[j+1];
                ara[j+1]=temp;
            }
       }
    }
    puts(ara);
}

int main(){
char sen[100];

gets(sen);
descending(sen);
return 0;
}
