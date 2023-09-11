#include<stdio.h>
void swap(int* p,int* q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;

}
int main()
{
    int i,j,k,n,ara[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
         scanf("%d",&ara[i]);
    }

    for(j=0;j<n-1;j++){
        for(k=0; k<n-j-1 ;k++){
            swap(&ara[k],&ara[k+1]);
        }
    }

    for(i=0;i<n;i++){
         printf("%d ",ara[i]);
    }
    return 0;
}

