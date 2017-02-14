#include <stdio.h>
main(){
    FILE *myFile;
    myFile = fopen("sample.txt", "r");

    int i,a,b,c;
    int numberArray[2];

    for (i = 0; i < 2; i++){
        fscanf(myFile, "%d", &numberArray[i]);
    }

    printf("C is %d\n", c = sqrt((numberArray[0]*numberArray[0])+(numberArray[1]*numberArray[1])));

}
