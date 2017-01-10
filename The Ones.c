#include<stdio.h>
#include<conio.h>

int main(){
	char str[13]="1710101101011";
	int i, count=0;
	for(i=0; i<sizeof(str); i++){
		if(str[i]=='1')
		count++;
	}
	printf("%d", count);		
}
