#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int launchLogic(int argv, int argc);

int main(int argc, char*argv[]){

    int input;

/*
    int iInput;
    int iCount = argc;
    iInput = atoi(argv[1]);

    launchLogic(iInput, iCount);

*/
    while(input != 5){
        printf("skriv en ønsket kommando [1-5]:\n\r");
        printf("1. Legg til et element i databasen\n\r");
        printf("2. Legg til et element i databasen\n\r");
        printf("3. Finn antall elementer i databasen\n\r");
        printf("4. Slett et element fra databasen\n\r");
        printf("5. Avslutte\n\r");

        scanf("%d", &input);

        switch(input){
            case 1:
                printf("1\r\n");
                input = 1;
                break;
            case 2:
                printf("2\r\n");
                input = 2;
                break;
            case 3:
                printf("3\r\n");
                input = 3;
                break;
            case 4:
                printf("4\r\n");
                input = 4;
                break;  
            default:
                printf("Non valid input\r\n");
                break;
        }
    }
    return 0;
}
/*
int launchLogic(int argv, int argc){

    int iUserSelectedChoice;

        if(argc == 2) {
            switch (argv) {
            case 1:
                printf("1\r\n");
                iUserSelectedChoice = 1;
                break;
            case 2:
                printf("2\r\n");
                iUserSelectedChoice = 2;
                break;
            case 3:
                printf("3\r\n");
                iUserSelectedChoice = 3;
                break;
            default:
                printf("Non valid input\r\n");
                break;
            }
        }
        else if(argc > 2) {
            printf("Too many arguments.\n\r");
        }
    return iUserSelectedChoice;
}
*/
void addElement(){

}
char getElement(){

}
char getAllElements(){

}
void deleteElement(){

}
void quit(){