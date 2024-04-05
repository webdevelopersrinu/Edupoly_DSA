#include <stdio.h>
#include <math.h>
int main (){
    int a,b;
    printf("enter the number a : \n");
    scanf("%d",&a);
    printf("enter the number b : \n");
    scanf("%d",&b);
    printf("(%d + %d)²= %d\n",a,b,a*a+b*b+2*a*b);
    return 0;
}
