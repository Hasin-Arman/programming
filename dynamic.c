#include<stdio.h>
#include<stdlib.h>

int main()
{
    int* ptr;
    int i,n=5;
    ptr= (int*) calloc(n,sizeof(int));

    if(ptr==NULL)
    {
        printf("Memory allocation failed");
    }
    else
    {

        for(i=0; i<n; i++)
        {
            scanf("%d",(ptr+i));
        }

        for(i=0; i<n; i++)
        {
            printf("%d ",*(ptr+i));
        }
    }
    n=10;
    ptr=realloc(ptr,n*sizeof(int));

     if(ptr==NULL)
    {
        printf("Memory allocation failed");
    }
    else
    {

        for(i=5; i<n; i++)
        {
            scanf("%d",(ptr+i));
        }

        for(i=0; i<n; i++)
        {
            printf("%d ",ptr[i]);
        }
    }



    return 0;
}
