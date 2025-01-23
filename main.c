#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "utils.h"

#define DEFAULT_PWD_LENGTH 15

int main(int argc, char *argv[])
{
    // initialize rand() function using current timestamp
    srand(time(NULL));

    unsigned char *password;

    // if the user provides a length argument, use provided length; else use default length
    if (argc > 1)
    {
        const int length = atoi(argv[1]);
        // enforce password length restrictions
        if (length <= 0 || length > 64)
        {
            throw_error("length cannot be greater than 64");
            exit(EXIT_FAILURE);
        }
        password = generate_password(length);
    }
    else
    {
        password = generate_password(DEFAULT_PWD_LENGTH);
    }

    // here the password variable can be manipulated for more advanced features

    // free memory allocated for password
    free(password);

    exit(EXIT_SUCCESS);
}