#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int launchLogic(int argv, int argc);

int main(int argc, char*argv[]){

    int iInput;
    int iCount = argc;
    iInput = atoi(argv[1]);

    launchLogic(iInput, iCount);

    return 0;
}

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
