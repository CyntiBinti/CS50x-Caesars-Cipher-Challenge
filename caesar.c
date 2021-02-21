#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[]) {
    
    //run command = argv[0], and the user input (of the key) is argv[1]
    if (argc == 2) {
        for (i = 0; i < strlen(argv[1]); i++)
        {
            //iterate over each character in the string held in argv[1] to make sure it's a digit
            if (isdigit(argv[1][i]))
            {
                printf("Success\n");
                printf("%s\n", argv[1]);
                return 0;   
            }
            
        }
    }
    else {
        printf("Usage: ./caesar key");
        return 1;
    }
    
 }
