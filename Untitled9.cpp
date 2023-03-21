#include <stdio.h>

int main() {
    // Write C code here
    int a=9,b=5,c=16,d=12,e,f;
    e=!(a<b||b<c);
    f=(a>b)?a-b:b-a;
    printf("e=%d,f=%d",e,f);
    return 0;
}
