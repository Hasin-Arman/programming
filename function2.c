
#include<stdio.h>
#include<math.h>

void numbers(int n);

int main()
{
    int n,i;
    scanf("%d",&n);
    numbers(n);
    return 0;
}

void numbers(int n)
{
    int i,j;

    for(i=1;i<=5;i++){
       for(j=1;j<=n;j++){
            printf("*");
       }
        n=n-1;
       printf("\n");
    }
}
