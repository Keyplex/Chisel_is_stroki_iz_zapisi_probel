#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Rus");
    FILE* myFile;
    myFile = fopen("1.txt", "r");

    //read file into array
    int numberArray[17];
    int i;

    if (myFile == NULL) {
        printf("Ошибка чтения файла\n");
        exit(0);
    }

    for (i = 0; i < 17; i++) {
        fscanf_s(myFile, "%1d,", &numberArray[i]);
        printf("% d", numberArray[i]);
    }    

    fclose(myFile);

    return 0;
}