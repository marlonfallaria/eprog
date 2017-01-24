#include <stdio.h>

int main(){
	int num,i;
	printf("Input: ");
	scanf("%d", &num);
	printf("\nOutput: %d", num%10);
	for(i=10;i<num;i*10){
		num=num/i;
		printf("\nOutput: %d", num%10);
		
	}
}
