#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    // initialize rand() function using current timestamp
    srand(time(NULL));

    unsigned char password[16];

    for (int i = 0; i < 15; i++)
    {
        // assign a random character to each index of the password string
        // fetches integers 33-127 (range of 94), exluding blank & undefined char values (except space ' ')
        const int newChar = (rand() % 95) + 33;

        // below is a printf that can be used when testing
        // printf("New char index: %i; New char: %c;\n", newChar, newChar);

        password[i] = newChar;
    }
    // null-terminate password so that it is printable as a string
    password[15] = '\0';

    // print the newly generated password for the user to copy
    printf("%s", password);
}