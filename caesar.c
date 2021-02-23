#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[]) {
    
    int i;
    int c = 0;
    int c_shift = ((c + atoi(argv[1])) % 26);

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
            
            //loop through each character to first make it an int, then add the key, then change back into a char to print out the shifted cipher
            for (i = 0; i < strlen(plaintext); i++)
            {
                if (isalpha(plaintext[i]))
                {
                    if (islower(plaintext[i]))
                    {
                        c = plaintext[i] - 'A';
                    }
                    else if (isupper(plaintext[i]))
                    {
                        c = plaintext[i] - 'a';
                    }
                    c_shift = ((c + atoi(argv[1])) % 26);
                }
            }   printf("ciphertext: %c\n", c_shift);
                return 0;
    }

}

