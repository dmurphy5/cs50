#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if(argc != 2)
    {
        printf("Please enter one string as an argument");
        return 1;
    }
    
    string key = argv[1];
    
    printf("Enter a string to encrypt\n");
    string text = get_string();
    
    int text_length = strlen(text);
    int key_length = strlen(key);
    
    for(int i = 0; i < text_length; i++) {
        if(isalpha(text[i]))
        {
            if(isupper(text[i]))
            {
                text[i] = ((text[i]- 65) + (tolower(key[(i%key_length)]) - 65) ) % 26 +  65;
                printf("%c", text[i]);
            }
            else if(islower(text[i]))
            {
                text[i] = ((text[i] - 97) + (toupper(key[(i % key_length)]) - 97 )) % 26 + 97;
                printf("%c", text[i]);
            }
        }
        else {
            printf("%c", text[i]);
        }
    }
    printf("\n");
    
    return 0;
}