#include <stdio.h>
int main (){
    int num;
    printf("enter the number : ");
    scanf("%d",&num);
    num%4 ?  printf("give number %d not divide 4", num) : printf("give number %d is divide by 4", num);
    return 0;
}
