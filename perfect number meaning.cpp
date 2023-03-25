#include <stdio.h>

int main() {
    // Write C code here
    int num,s=0;
    printf("enter the number: ");
    scanf("%d",&num);
    for(int i=1;i<num;i++){
        if(num%i==0){
            s=s+i;
        }
        }
    if(s==num){
            printf("%d is perfect number",num);
    }else{
    	printf("%d is not a  perfect number",num);
	}
}
    

