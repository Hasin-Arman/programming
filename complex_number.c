#include<stdio.h>

struct comp{
    float real;
    float img;
};

struct comp multiply(struct comp p,struct comp q){
    struct comp ans;
    ans.real=p.real*q.real-p.img*q.img;
    ans.img=p.real*q.img+q.real*p.img;
    return ans;
};

void printcomp(struct comp p){
    printf("%0.1f + %0.1fi",p.real,p.img);
}
int main(){

struct comp num1={3,4};
struct comp num2={4,5};

printcomp(multiply(num1,num2));


return 0;
}
