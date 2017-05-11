#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Enter Height\n");
    int height = get_int();
    if (height > 0 && height < 24){
            for(int i = 0; i < height ; i++) {
                for(int j = 0; j < height - i - 1; j++ ) {
                  printf("%s", " ");
                }
                for(int k = 0; k < i + 1 ; k++) {
                    printf("#");
                    
                }
                printf("\n");
        }
    }
}