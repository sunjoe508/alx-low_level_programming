#include <stdio.h>
#include <time.h>
#include <stdlib.h>

char passwordType[1];

int generateRandomNumbers();

char password[512];

char passwordLength[];

void printPassword();

int main() {


    srand(time(NULL));

  
    gets(passwordType);

    printf("Enter the password length\n");


    gets(passwordLength);

    printf("How many passwords do you want??\n");

    char passwordTimes[1];

    gets(passwordTimes);

    int m = atoi(passwordTimes);

    printf("%d",m);

    while (m>0){

        printPassword();

        m--;

        _sleep(1000);

    }

    char isAgain[1];

    printf("Do you want to generate password again(y/n)\n");


    gets(isAgain);

    if (isAgain[0] == 'y'){

        main();

    } else if (isAgain[0] == 'n'){

        printf("Thanks for using my password generator\n");

    } else{

        printf("Invalid input\n");

    }


    return 0;

}


int generateRandomNumbers(){

    int random;

    int r;

    switch (passwordType[0]){

        case 'a':

            random = (rand() % (122 + 1 - 97)) + 97;

            break;

        case 'b':

            random = (rand() % (90 + 1 - 65)) + 65;

            break;

        case 'c':

            random = (rand() % (57 + 1 - 48)) + 48;

            break;

        case 'd':

            while (1){

                r = (rand() % (256 + 1 - 0)) + 0;

                if (((r<=47) && (r>=33)) || ((r<=64) && (r>=58)) || ((r<=96) && (r>=91)) || ((r<=175) && (r>=123)) || ((r<=254) && (r>=178))){

                    random = r;

                    break;

                }

            }

            break;

        case 'e':

            random = (rand() % (126 + 1 - 33)) + 33;

            break;

        case 'f':

            while (1){

                r = (rand() % (256 + 1 - 0)) + 0;

                if (((r<=90) && (r>=65)) || ((r<=122) && (r>=97))){

                    random = r;

                    break;

                }

            }

            break;

        case 'g':

            while (1){

                r = (rand() % (256 + 1 - 0)) + 0;

                if (((r<=57) && (r>=48)) || ((r<=122) && (r>=97))){

                    random = r;

                    break;

                }

            }

            break;

        case 'h':

            while (1){

                r = (rand() % (256 + 1 - 0)) + 0;

                if (((r<=122) && (r>=97)) ||((r<=47) && (r>=33)) || ((r<=64) && (r>=58)) || ((r<=96) && (r>=91)) || ((r<=175) && (r>=123)) || ((r<=254) && (r>=178))){

                    random = r;

