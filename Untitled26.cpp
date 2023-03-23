#include<stdio.h>
#include<math.h>
int num;
void square(){
    int s=pow(num,2);
    printf("%d\n",s);
    cube();
}
void cube(){
    int c=pow(num,3);
    printf("%d\n",c);
}
int main(){
    printf("enter the number: ");
    scanf("%d",&num);
    square();
}
