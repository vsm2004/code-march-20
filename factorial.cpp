#include<stdio.h>
int main(){
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	for(int i=(n-1);i>=1;i--){
		n=n*i;
	}
	printf("%d",n);
}
