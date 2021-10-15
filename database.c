#include <stdio.h>
#include <stdlib.h>
#include "./include/database.h"

int size = 0;

char *dataBase[255] = {0};

void createDatabase(int iType){
    printf("Halla");
}

void addEntry(char *entry){
    dataBase[size] = entry;
    printf("Added to %s\r\n", dataBase[size]);
    size++;
}

char * getElement(int index){
    return dataBase[index];
}

int getEntryCount(){
    return(size);
}