#include<stdio.h>
int main(){
	int a,b,num;
	
	printf("Enter number : ");
	scanf("%d", &a);
	printf("Enter number : ");
	scanf("%d", &b);
	
	if(a>b){
		num=a-b;
		printf("%d", num);
	}	
	if(b>a){
		num=b-a;
		printf("%d", num);
	}
		
}
