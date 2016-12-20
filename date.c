#include<stdio.h>
int main(){
	int month, day;
	
	printf("Enter month (1-12) : ");
	scanf("%d", &month);
	printf("\nEnter day (1-7) : ");
	scanf("%d", &day);
	if(month == 1){
		printf("\n January");
	}
	if(month == 2){
		printf("\n February");
	}	
	if(month == 3){
		printf("\n March");
	}	
	if(month == 4){
		printf("\n April");
	}	
	if(month == 5){
		printf("\n May");
	}	
	if(month == 6){
		printf("\n June");
	}	
	if(month == 7){
		printf("\n July");
	}	
	if(month == 8){
		printf("\n August");
	}	
	if(month == 9){
		printf("\n September");
	}	
	if(month == 10){
		printf("\n October");
	}	
	if(month == 11){
		printf("\n November");
	}
	if(month == 12){
		printf("\n December");
	}
	if(day == 1){
		printf(" Sunday");
	}
	if(day == 2){
		printf(" Monday");
	}	
	if(day == 3){
		printf(" Tuesday");
	}	
	if(day == 4){
		printf(" Wednesday");
	}	
	if(day == 5){
		printf(" Thursday");
	}	
	if(day == 6){
		printf(" Friday");
	}	
	if(day == 7){
		printf(" Saturday");
	}						
		
}
