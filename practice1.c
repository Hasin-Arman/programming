#include<stdio.h>

int main(){
float x,y;
scanf("%f%f",&x,&y);
float *p=&x;
float *r=&y;
float ans=(*p+*r)/2;
printf("%f",ans);
return 0;
}
