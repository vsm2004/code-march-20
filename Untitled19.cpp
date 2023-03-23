#include <stdio.h>

int main() {
    // Write C code here
    // entering size of array
    int  n;
    printf("enter the size of array: ");
    scanf("%d",&n);
    // declaring array
    int marks[n];
   // declaring entries in an array
    printf("enter the values: ");
   for(int i=0;i<n;i++){
       scanf("%d",&marks[i]);
   }
   // reverse printing the array
   printf("revese array: ");
   for(int i=(n-1);i>=0;i--){
       printf("%d\t",marks[i]);
   }

    return 0;
}
