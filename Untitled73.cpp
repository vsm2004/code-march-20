#include<stdio.h>
int main(){
	int age;
	printf("enter the age");
	scanf("%d",&age);
	int principal;
	printf("enter the amount");
	scanf("%d",&principal);
	int time;
	printf("enter the time in years");
	scanf("%d",&time);
	if(age>=60){
		int interest=12;
		printf("%d",(principal*interest*time)/100);
	}else{
		int interest=10;
		printf("%d",(principal*interest*time)/100);
	}
	
}

