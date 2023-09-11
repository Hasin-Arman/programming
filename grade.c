#include<stdio.h>

void grade(int num)
{
    if(num>=80 && num<=100)
    {
        printf("A");
    }

    else if(num>=60 && num<=79)
    {
        printf("B");
    }

    else if(num>=40 && num<=59)
    {
        printf("C");
    }

    else
    {
        printf("F");
    }


}

int main()
{
    int num;
    scanf("%d",&num);
    grade(num);
    return 0 ;
}

