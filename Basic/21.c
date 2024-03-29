#include <stdio.h>
int main (){
   int a=20;
   int b=30;
   printf("before swap a=%d b=%d\n",a,b);
   int temp;
   temp=a;
   a=b;
   b=temp;
   printf("after swap a=%d b=%d",a,b);
   return 0;
}
