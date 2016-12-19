#include<stdio.h>
int main(){
	int num;
	
	printf("Enter number : ");
		scanf("%d", &num);
		printf("Number is : %d", num);	
		if(num % 3 == 0){
			printf(" Ed");
		}
		if(num % 5 == 0){
			printf(" Pogi");
		}
		
}
