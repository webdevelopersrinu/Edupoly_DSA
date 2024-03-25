#include <stdio.h>
int main (){
    float price =538.56;
    float gst=18;
    float persentage =(price/100)*gst;
    printf("total price included GST is %.2f", price+persentage);
    return 0;
}
