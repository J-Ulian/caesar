/*
* caesar.c
* by j-ulian
*
* Implementation of a program that encrypts messages
* using Caesar’s cipher, per the below.
*
* $ ./caesar 13
* plaintext:  HELLO
* ciphertext: URYYB
*
*/

#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    int k = 0;

    if (argc == 2)
    {
        for (int i = 0; i < strlen(argv[1]); i++)
        {
            if (isdigit(argv[1][i]) == 0)
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
            else if (isdigit(argv[1][i]) != 0)
            {
                k = atoi(argv[1]);
            }

        }
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    string plaintext = get_string("plaintext: ");
    printf("ciphertext: ");

    for (int i = 0; i < strlen(plaintext); i++)
    {
        char f = 0;
        char c = plaintext[i];
        if (isalpha(c) != 0)
        {
            if (isupper(c) != 0)
            {
                c = c - 65;
                f = ((c + k) % 26);
                f = f + 65;
            }
            else
            {
                c = c - 97;
                f = ((c + k) % 26);
                f = f + 97;
            }

        }
        else
        {
            f = c;
        }



        printf("%c", f);
    }
 printf("\n");
}

