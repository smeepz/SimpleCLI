#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./include/database.h"

int main(int argc, char*argv[]){

    char input;
    char szBuffer[255];

    while(input != '5'){

        printf("skriv en ønsket kommando [1-5]:\n\r");
        printf("1. Add an element to the database\n\r");
        printf("2. Find element in the database\n\r");
        printf("3. Find the total number of elements in the database\n\r");
        printf("4. Delete an element from the database\n\r");
        printf("5. Quit\n\r");

        input = getchar();
        while(getchar() != '\n');
        switch(input){
            case '1':
                printf("Add an element to the database\r\n");
                printf("Add name:\r\n");
                fgets(szBuffer, 255, stdin);
                printf("Will add element %s", szBuffer);
                addEntry(szBuffer);
                break;
            case '2':
                printf("Find element in the database\r\n");
                int findIndex = getchar() - '0';
                while(getchar() != '\n');
                char *temp = getElement(findIndex);
                printf("The element is: %s\r\n", temp);
                break;
            case '3':
                printf("Find the total number of elements in the database\r\n");
                int count = getEntryCount();
                printf("Total elements: %d\r\n", count);
                break;
            case '4':
                printf("Delete an element from the database\r\n");
                printf("Enter index for the element to delete:\r\n");
                int deleteIndex = getchar() - '0';
                while(getchar() != '\n');
                deleteEntry(deleteIndex);
                printf("The value at index %d has been deleted. \r\n", deleteIndex);
                break;
            case '5':
                printf("Exiting...\r\n");
                break;  
            default:
                printf("Non valid input\r\n");
                break;
        }
    }
    return 0;
}
