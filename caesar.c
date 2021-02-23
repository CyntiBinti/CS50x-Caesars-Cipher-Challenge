#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[]) {
    
    int i;

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
            return ciphertext(plaintext);
            return 0;

    }
}

    string ciphertext(plaintext);
    string ciphertext(plaintext) {
    for (i = 0; i < strlen(plaintext); i++)
    {
        if (isalpha(plaintext[i]) || islower(plaintext[i]) || isupper(plaintext[i]))
        {
            char c = ((plaintext[i] + (argv[1])) % 26);
            printf("ciphertext: %c\n", c);
        }
    }
}
