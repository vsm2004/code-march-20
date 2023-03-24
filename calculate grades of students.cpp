#include<stdio.h>
int main(){
    int n=4;
   int marks[n];
   printf("enter the marks: ");
   scanf("%d%d%d%d",&marks[0],&marks[1],&marks[2],&marks[3]);
   int d=(marks[0]+marks[1]+marks[2]+marks[3])/5;
   if(d>=75){
       printf("distinction");
   
   if(d>=60&&d<75){
       printf("first division");
   }
   if(d>=50&&d<60){
       printf("second division");
   }
   if(d>=40&&d<50){
       printf("third division");
   }
   if(d<40){
       printf("fail");
   }
}
}
