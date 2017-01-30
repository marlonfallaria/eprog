#include <stdio.h>
int main(){
	int i, grades[3], average, sum;
	
	for(i = 0; i < 3; i++)
    {
        printf("Enter number %d: ", i+1);
        scanf("%d", &grades[i]);
        sum += grades[i];
    }
    
	average = sum / 3;
    printf("Average = %d", average);
   
    if(average >= 75){
		printf("\nPass");
	}	
	if(average < 75){
		printf("\nFail");
	}
  
}
