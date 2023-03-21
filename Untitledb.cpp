#include <stdio.h>

int main() {
    // Write C code to find factorial of a number
   int n;
   printf("enter the number");
   scanf("%d",&n);
   for(int i=(n-1);i>=1;i--){
       n=n*i;
   }
   printf("%d",n);

    return 0;
}
