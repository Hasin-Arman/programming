#include<stdio.h>

int main()
{
    char name[100];
    fgets(name,sizeof(name),stdin);
    int count=0;
    int i=0;
    while(name[i]!='\0')
    {
        if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u')
        {
            printf("chayan");
            count++;
            i++;
        }
    }
    printf("No of vowels: %d",count);
    return 0;
}
