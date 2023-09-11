#include<stdio.h>

int main()
{
    FILE* inputFile;
    FILE* outputFile;
    outputFile=fopen("output.txt","a");
    inputFile=fopen("input.txt","r");
    if(inputFile==NULL)
    {
        fprintf(outputFile,"File Not Found");
    }
    int a,n,summ=0;
    fscanf(inputFile,"%d",&n);

    for(int i=1; i<=n; i++)
    {
        fscanf(inputFile,"%d",&a);
        summ+=a;
    }
    fprintf(outputFile,"Sum is->%d\n",summ);
    fclose(inputFile);
    fclose(outputFile);
    return 0;
}
