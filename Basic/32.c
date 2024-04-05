#include <stdio.h>
int main (){
    int num;
    printf("enter the number : ");
    scanf("%d",&num);
    num%2 ? printf("give number %d is not even", num): printf("give number %d is even", num);
    return 0;
}
