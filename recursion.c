#include<stdio.h>
void  print_number(int n)
{
    if(n>0)
    {
        printf("%d ",n);
        print_number(n-1);
    }
    else
    {
        return;
    }

}


int main()
{
    int n;
    scanf("%d",&n);
    print_number(n);
    return 0;
}
