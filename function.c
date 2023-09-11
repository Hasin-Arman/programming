#include<stdio.h>

int gcd_cal(int x,int y)
{
    int i,max=1;
    for(i=2; i<=x; i++)
    {
        if(x%i==0 && y%i==0)
        {
            if(i>max){
                max=i;
            }
        }
    }
    return max;
}

int main()
{
    int a,b,ans;
    scanf("%d%d",&a,&b);
    ans=gcd_cal(a,b);
    printf("%d",ans);
    return 0;
}
