#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[]) {
    
    int i;
    int j;

    //the run command is stored in argv[0], and the user input (of the cipher key) is stored in argv[1]
    if (argc == 2) {
        
        //iterate over each character in the string held in argv[1]
        for (i = 0; i < strlen(argv[1]); i++)
        {
            //make sure the [i]th character is a digit and if so then print string as int instead
            if (!isdigit(argv[1][i]))
            {
                printf("Usage: ./caesar key");
                return 1;
            }
        }
            printf("%i\n", atoi(argv[1]));
            string plaintext = get_string("plaintext: ");
            printf("ciphertext: ");
            
            //loop through each character to first make it an int, then add the key, then change back into a char to print out the shifted cipher
            for (j = 0; j < strlen(plaintext); j++)
            {
                if (isalpha(plaintext[j]) && islower(plaintext[j]))
                {
                    printf("%c", ((((plaintext[j] - 'a') + atoi(argv[1])) % 26) + 'a'));
                }
                else if (isalpha(plaintext[j]) && isupper(plaintext[j]))
                {
                    printf("%c", ((((plaintext[j] - 'A') + atoi(argv[1])) % 26) + 'A'));
                }
                else
                {
                    printf("%c", (plaintext[j]));
                }
        }   printf("\n");
            return 0;
    }

}

