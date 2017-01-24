#include <stdio.h>

int main(){
	int i;
	int num=0;
	for(i=0; i<=23456789; i++){
		if(i%2 == 0){
			num = num + i;
		}
	}
	printf("%d", num);
}
