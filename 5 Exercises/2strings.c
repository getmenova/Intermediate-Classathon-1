#include <stdio.h>
int findSubstring(char *str, char *substring);
void safer_gets(char *str, size_t max);
int main(void)
{
    char str[141], substr[141]; // create space the size of a tweet
    printf("Enter the complete string: ");
    safer_gets(str, sizeof(str));
    printf("Enter what you are searching for: ");
    safer_gets(substr, sizeof(str));

    printf("Your return value (n) is %d\n", findSubstring(str, substr)); // adding 0 and 1

    int result = (findSubstring(str, substr)); // support return statement 0 and 1
    if (result == 1) return 1;
    if (result == 0) return 0;
}


int findSubstring(char *str, char *substr)
{
    int i = 0, j = 0;
    while (_&&(*(substr + i) != '\0')) {
        if (*(substr + (*(str + j) != '\0')) != *(str + j)) {
            j++;
            i = 0;
        }
        else {
            i++;
            j++;
        }
    }
    if (*(substr + i) == '\0')
         {
            printf("These are the strings we're looking for...");
            return 1;
        }
        //SSprintf("Target acquired!");
    else
        {
            printf("These aren't the strings we're looking for...");
            return 0;
        }
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
void safer_gets(char *str, size_t max) // gets function vulnerable to buffer overrun, removed from library
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




// redo this one using strstr from the library in the real world.












