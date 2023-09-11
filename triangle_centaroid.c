#include<stdio.h>

struct point
{
    float x;
    float y;
};

struct point centroid(struct point a,struct point b,struct point c)
{

    struct point ans;
    ans.x=(a.x+b.x+c.x)/3;
    ans.y=(a.y+b.y+c.y)/3;

    return ans;

};

int main()
{

    struct point p1= {3,2};
    struct point p2= {1,4};
    struct point p3= {5,6};

    struct point p = centroid(p1,p2,p3);

    printf("The centroid is (%0.1f,%0.1f)",p.x,p.y);

    return 0;
}
