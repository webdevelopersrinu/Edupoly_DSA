#include <stdio.h>
#include <math.h>
int main (){
   float payment=1200;
   float time=2;
   float rate =5.4;
   float temp =1+(rate/100);
   float p=pow(temp, time);
   printf("compound interest is %f", payment*p);
   return 0;
}   
