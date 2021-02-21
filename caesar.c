#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[]) {
    
    //run command = argv[0], and the user input (of the key) is argv[1]
    if (argc == 2) {
        
        int i;
        int digit_number = 0;
        
        for (i = 0; i < strlen(argv[1]); i++)
        {
            //iterate over each character in the string held in argv[1] to make sure it's a digit and if so then print string as int
            if (isdigit(argv[1][i]))
            {
                digit_number +=1;
            }
            if (digit_number == strlen(argv[1]))
            {
                printf("Success\n");
                printf("%i\n", atoi(argv[1]));
                return 0;   
            }
            
        }
    }
    else {
        printf("Usage: ./caesar key");
        return 1;
    }
    
 }
