#include <stdio.h>

int main() {
    // Write C code her
    int code;
    printf("enter the code");
    scanf("%d",&code);
    int recode;
    printf("enter the recode");
    scanf("%d",&recode);
    if(code==recode){
        printf("welcome");
    }else{
        printf("sorry");
    }
    return 0;
}
