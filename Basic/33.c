#include <stdio.h>
int main (){
    int num;
    printf("enter the number : ");
    scanf("%d",&num);
    num%2 ?  printf("give number %d is odd", num) : printf("give number %d is not odd ", num);
    return 0;
}
