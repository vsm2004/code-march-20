#include <stdio.h>

int main() {
    // Write C code here
    int a,b,c;
    printf("enter the numbers");
    scanf("%d\n%d\n%d",&a,&b,&c);
    if(a>b && a>c){
        printf("a is greatest among a,b,c");
    }
     if(b>c){
        printf("b is greatest among a,b,c");
    }
    else{
        printf("c is greatest among a,b,c");
    }
   

    return 0;
}
