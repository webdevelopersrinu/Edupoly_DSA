#include <stdio.h>
int main (){
    int num;
    printf("enter the number : ");
    scanf("%d",&num);
    num>=0?  printf("give number %d is positive", num) : printf("give number %d is not positive ", num);
    return 0;
}
