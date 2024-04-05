#include <stdio.h>
#include <math.h>
int main (){
    
    int a,b;
    printf("enter the number a : \n");
    scanf("%d",&a);
    printf("enter the number b : \n");
    scanf("%d",&b);
    int c=pow(a+b,3);
    printf("(%d + %d)³= %d\n",a,b,c);
    
    return 0;
}
