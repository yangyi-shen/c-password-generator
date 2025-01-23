#include <stdio.h>
#include <stdlib.h>

void throw_error(char *message) {
    printf("\nERROR: %s\n\n", message);
}

unsigned char *generate_password(int length)
{
    unsigned char *password = malloc(length + 1);
    // check that malloc doesn't return NULL (rarely happens, but it's good practice to check for this)
    if (password == NULL)
    {
        throw_error("malloc failed, insufficient memory likely");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < length; i++)
    {
        // assign a random character to each index of the password string
        // fetches integers 33-127 (range of 94), exluding blank & undefined char values (except space ' ')
        const int newChar = (rand() % 95) + 33;

        // below is a printf that can be used when testing
        // printf("New char index: %i; New char: %c;\n", newChar, newChar);

        password[i] = newChar;
    }
    // null-terminate password so that it is printable as a string
    password[length] = '\0';

    // print the newly generated password for the user to copy
    printf("\nGENERATED PASSWORD: %s\n\n", password);

    return password;
}