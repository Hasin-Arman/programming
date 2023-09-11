#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int T,i,sum,A,B,C,ans;
             scanf("%d",&T);
    for (i=1;i<=T;i++){
            scanf("%d%d%d%d",&sum,&A,&B,&C);
            ans=sum-A-B-C;
            printf("%d\n",ans);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
