#include<stdio.h>
void check_beautiful(int n,int ara[]){
    int i,ans,flag=0;
    for(i=0;i<n;i++){
        while(ara[i]>0){
            ans=ara[i]%10;
            ara[i]/=10;
            if(ans==7)
                flag++;
        }
    }
    if(flag>=(n/2))
        printf("Beautiful");
    else{
        printf("Ugly");
    }
}
int main(){
int i,n,ara[100];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }
    check_beautiful(n,ara);
return 0;
}

