#include <stdio.h>
int main(){
	int i, num[5], cnt=0;
	
	for(i = 0; i < 5; i++)
    {
        printf("%d. Enter number 0 or 1: ", i+1);
        scanf("%d", &num[i]);
        
    }
    for(i=0; i<5; i++){
    	if(num[i] == 1){
    		cnt++;
		}
	}
    printf("\nNumber of 1s = %d", cnt);
    printf("\nNumber of 0s = %d", 5-cnt);  
}
