#include <stdio.h>


int main()
{
    int n,m;
    printf("Enter the first number: ");
    scanf("%d",&n);

     printf("Enter the second number: ");
     scanf("%d",&m);

    if(n%m==0){
        printf("The first number is divisible by the second number. ");
    }

    else if(m%n==0){
        printf("The second number is divisible by the first number. ");
    }
    else{
        printf("None of them are divisible by the other.");
    }


return 0;
}
