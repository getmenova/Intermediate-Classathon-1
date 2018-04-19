#include <stdio.h>
int findSubstring(char *str, char *substring);
void safer_gets(char *str, size_t max);
int main(void)
{
    char str[140], substr[140]; // create space the size of a tweet
    printf("Enter the complete string: ");
    safer_gets(str, sizeof(str));
    printf("Enter what you are searching for: ");
    safer_gets(substr, sizeof(str));
    (findSubstring(str, substr));
    //printf("Your result: %d\n", findSubstring(str, substr)); adding 0 and 1
    return 0;
}

int findSubstring(char *str, char *substr)
{
    int i = 0, j = 0;
    while ((*(str + j) != '\0')&&(*(substr + i) != '\0')) {
        if (*(substr + i) != *(str + j)) {
            j++;
            i = 0;
        }
        else {
            i++;
            j++;
        }
    }
    if (*(substr + i) == '\0')
        return printf(" 1 - Target acquired!");
        //SSprintf("Target acquired!");
    else
        return printf("0 - These aren't the strings we're looking for...");

     /*                              /~\
                                    |o o)      Please try again!
                                    _\=/_
                    ___        #   /  _  \   #
                   /() \        \\//|/.\|\\//
                 _|_____|_       \/  \_/  \/
                | | === | |         |\ /|
                |_|  O  |_|         \_ _/
                 ||  O  ||          | | |
                 ||__*__||          | | |
                |~ \___/ ~|         []|[]
                /=\ /=\ /=\         | | |
________________[_]_[_]_[_]________/_]_[_\_________________________
        //printf("These are not the strings you're looking for...");*/
}
void safer_gets(char *str, size_t max) // gets function vulnerable to bufer overrun, removed from library
{
    int i;
    fgets(str, max, stdin);
    for (i = 0; *(str + i) != '\0'; i++) {
        if (*(str + i) == '\n') {
            *(str + i) = '\0';
            break;
        }
    }
}




// redo - and use strstr from the library












