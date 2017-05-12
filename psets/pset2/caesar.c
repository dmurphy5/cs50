#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if(argc != 2)
    {
        printf("Please enter a positive integer as an argument");
        return 1;
    }
    
    int key = atoi(argv[1]);
    
    printf("Please enter a string.\n");
    string text = get_string();
    
    key = key + 1;
    
    for(int i = 0; i < strlen(text); i++)
    {
        if(isalpha(text[i]))
        {
            if (isupper(text[i]))
            {
                text[i] = ((((text[i] - 65)+ key) % 26) + 65);
                printf("%c", text[i]);
            }
            else if (islower(text[i]))
            {
                text[i] = ((((text[i] - 97)+ key) % 26) + 97);
                printf("%c", text[i]);
            }
        }
        else
        printf("%c", text[i]);
    }
    printf("\n");
    
    return 0;
}