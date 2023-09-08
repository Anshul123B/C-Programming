#include<stdio.h>
void swap(int a, int b){
    a=a^b;
    b=b^a;
    a=a^b;
    printf("After Swapping\n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);
}
void main(){
    int a=5,b=7;
    printf("Before swapping\n");
    printf("a= %d\n",a);
    printf("b= %d\n",b);
    
    swap(a,b);
}