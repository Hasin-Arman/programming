#include<stdio.h>

int main()
{
    int mat1[3][3],mat2[3][3],ans[3][3];
    int i,j,k,result;
    printf("Enter the first matrix:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Enter the second matrix:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    result=0;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            for(k=0; k<3; k++)
            {
                result+= mat1[i][k]*mat2[k][j];
            }
            ans[i][j]=result;
        }

    }
    printf("The product of two matrix is:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d\t",ans[i][j]);
        }
        printf("\n");
    }
    return 0;
}
