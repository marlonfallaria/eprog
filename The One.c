#include<stdio.h>
int main(){
	int num;
	
	printf("Enter number : ");
	scanf("%d", &num);
	
	while(num>0){
		if(num % 2 == 0){
			num = num/2;
			printf("\n%d", num);
		}	
		
		if(num==1){
			break;	
		}
		
	    if(num % 2 != 0){
	    	num = (num*3)+1;
	    	printf("\n%d", num);
		}
		if(num==1){
			break;	
		}			
	}		
}
