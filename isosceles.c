#include<stdio.h>

int main(){
	int num,i,j;
	printf("Input num: ");
	scanf("%d", &num);
	for(i=0;i<num;i++){
		for(j=0;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	for(i=1;i<num;i++){
		for(j=num;j>i;j--){
			printf("*");
		}
		printf("\n");
	}
}
