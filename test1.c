#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, x, flag;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &x);

        flag = 0;

        if(x == 2)
        {
            printf("Yes\n");
            continue;
        }

        if(x % 2 == 0 || x < 2)
        {
            printf("No\n");
            continue;
        }

        for(int j = 3; j <= sqrt(x); j+=2)
        {
            if(x % j == 0)
            {
                flag = 1;
                break;
            }
        }

        if(!flag)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}

