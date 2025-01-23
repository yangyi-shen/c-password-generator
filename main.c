#include <stdio.h>
#include <stdlib.h>
#include <time.h>

unsigned char *generate_password(void)
{
    unsigned char *password = malloc(16);
    // check that malloc doesn't return NULL (rarely happens, but it's good practice to check for this)
    if (password == NULL) {
        printf("ERROR: malloc failed, insufficient memory likely\n");
        exit(EXIT_FAILURE);
    }

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

    return password;
}

int main(int argc, char *argv[])
{
    // initialize rand() function using current timestamp
    srand(time(NULL));

    // call generate_password function
    unsigned char *password = generate_password();

    // here the password variable can be manipulated for more advanced features

    // free memory allocated for password
    free(password);

    return 0;
}