#include<stdio.h>
#include<math.h>
#include<string.h>
struct student
{
    char name[50];
    int id;
    float weight;
};


int main()
{
    struct student s[10];
    int i;
    char ara[50];
    for(i=0; i<1; i++)
    {

        strcpy(s[i].name,"chayan");
        s[i].id=12;
        s[i].weight=65;
    }

    for(i=0; i<1; i++)
    {
        printf("Name:%s\nId:%d\nWeight:%f\n",s[i].name,s[i].id,s[i].weight);
    }


    return 0;
}


