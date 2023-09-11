#include<stdio.h>

int main (){
int x,y,z;

printf("Please enter three numbers: ");
scanf("%d %d %d",&x,&y,&z);

if(x>y && x>z){
    printf("The largest number is %d",x);
}
else if(y>x && y>z){
    printf("The largest number is %d",y);
}
else if (z>x && z>y){
    printf("The largest number is %d",z);
}
else{
      if (x==y){
        printf("Both x and y both are equal");
      }
      else if(x==z){
         printf("Both x and z both are equal");
      }
      else{
        printf("Both y and z both are equal");
      }
}
return 0;
}
