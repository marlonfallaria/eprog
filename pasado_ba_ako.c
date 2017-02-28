#include <stdio.h> 
#include <string.h>
struct detail{
	long id;
	float gpa;
};

struct student{  
	char name[30];
	struct detail info;
}; 

void DisplayMenu(){
	printf("0 - Exit\n");
	printf("1 - Write to File\n");
	printf("2 - Read file\n");
	printf("3 - Display Passed\n");
	printf("4 - Display Failed\n");
	printf("5 - Display Invalid\n");
}

void WriteToFile(){
	FILE *myFile;
	struct student stud;
	myFile = fopen("sample.txt", "a");
	printf("Enter student name: ");
	scanf("%s", &stud.name);
	printf("Enter Program/Course: ");
	scanf("%s", &stud.info.id);
	printf("Enter student Grade: ");
	scanf("%f", &stud.info.gpa);	
	fclose(myFile);
}

void PassedStud(){
	FILE *myFile;
	struct student stud;
	myFile = fopen("sample.txt", "a");
		printf("Students who have passed:\n");
	if(stud.info.gpa >= 75){
		printf("%s \n", stud.name);
	}	
	fclose(myFile);
}

void FailedStud(){
		FILE *myFile;
	struct student stud;
	myFile = fopen("sample.txt", "a");
		printf("Students who have failed:\n");
	if(stud.info.gpa < 75){
		printf("%s \n", stud.name);
	}	
	fclose(myFile);
}
void ReadFromFile(){
	struct student stud;
	FILE *myFile;
	myFile = fopen("sample.txt", "r");
    if(myFile == NULL){
    	printf("Error: File does not exist");
	}
	char temp[128];
	while (fgets(temp, sizeof temp, myFile) != NULL) {
		sscanf(temp, "%s %d %f", &stud.name, &stud.info.id, &stud.info.gpa);
		printf("%s %d %f\n", stud.name, stud.info.id, stud.info.gpa);
	}
	fclose(myFile);
}

void InvalidGrade(){
		struct student stud;
	FILE *myFile;
	myFile = fopen("sample.txt", "a");
	printf("Students with invalid grade:\n");
	if(stud.info.gpa < 0){
		printf("%s \n", stud.name);
	}
}

int main (){	
    int choice = 1;
    DisplayMenu();
    scanf("%d", &choice);
    while(choice != 0){
    	switch(choice){
    		case 0: 
    			break;
    		case 1: 
    			WriteToFile();
    			break;
    		case 2: 
    			ReadFromFile();
    			break;
    		case 3:
    			PassedStud();
    			break;
    		case 4:
    			FailedStud();
    			break;
    		case 5:
    			InvalidGrade();
    			break;
		}
		DisplayMenu();
    	scanf("%d", &choice);
	}    
}
