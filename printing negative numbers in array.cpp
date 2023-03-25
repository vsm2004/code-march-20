#include<stdio.h>
int main(){
	int array[7]={16,-18,27,-16,23,-21,19};
	for(int i=0;i<7;i++){
		if(array[i]<0){
			printf("%d\t",array[i]);
		}
	}
}
