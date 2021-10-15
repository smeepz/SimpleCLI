#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./include/database.h"

int size = 0;

char dataBase[255][255] = {0};

void createDatabase(int iType){
    printf("Halla");
}

void addEntry(char *entry){
    memcpy(dataBase[size], entry, strlen(entry) + 1);
    printf("Added to %s\r\n", dataBase[size]);
    size++;
}

char * getElement(int index){
    return dataBase[index];
}

int getEntryCount(){
    return(size);
}