#include <stdio.h>

int main() {
    // Write C code here
    int age;
    printf("enter the age");
    scanf("%d",&age);
    if(age>=18){
        printf("eligible for vote");
    }else{
        printf(" you have %d years to become eligible",18-age);
    }
    return 0;
}
