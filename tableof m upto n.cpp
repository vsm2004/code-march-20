#include<stdio.h>
int main(){
	int m,n,t=1;
	printf("enter the values: ");
	scanf("%d%d",&m,&n);
	while(t*m<n){
		printf("%d\n",t*m);
		t++;
	}
	
}
