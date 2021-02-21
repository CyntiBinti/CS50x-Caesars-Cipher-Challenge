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
            printf("Success\n");
            printf("%i\n", atoi(argv[1]));
            return 0;   
    }
}
