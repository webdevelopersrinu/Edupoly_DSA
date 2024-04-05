#include <stdio.h>
#include <math.h>
int main (){
    
    int a,b,c;
    printf("enter the number a : \n");
    scanf("%d",&a);
    printf("enter the number b : \n");
    scanf("%d",&b);
    printf("enter the number c : \n");
    scanf("%d",&c);
    int d=pow(a+b+c,2);
    printf("(%d + %d+ %d)³= %d\n",a,b,c,d);
    
    return 0;
}
