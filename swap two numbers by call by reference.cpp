#include <stdio.h>
int main() {
    // Write C code here
    int a=12,b=16,c;
    int*ptr1=&a;
    int*ptr2=&b;
    int*ptr3=&c;
    //swap a value to c
    int**pptr1=&ptr1;
    *ptr3=*ptr1;
   // printf("%d\n",c);
    //swap b value to a
    *ptr1=*ptr2;
    printf("a=%d\n",a);
    //swap  c value to b
    *ptr2=*ptr3;
    printf("b=%d",b);
    
}
