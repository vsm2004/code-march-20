#include<stdio.h>
int main(){
	// programme to find out grade of a student
	int marks[4];
			printf("enter the marks: ");
	scanf("%d%d%d%d",&marks[0],&marks[1],&marks[2],&marks[3]);
	int d=((marks[0]+marks[1]+marks[2]+marks[3])/5);
	if(d>=75){
		printf("result is :distiction");
	}
	if(d>=60&&d<75){
		printf("result is :first division");
	}
	if(d>=50&&d<60){
		printf("result is :second division");
	}
	if(d>=40&&d<50){
			printf("result is :third division");
	}
	if(d<40){
		printf("failed");
	}
}
