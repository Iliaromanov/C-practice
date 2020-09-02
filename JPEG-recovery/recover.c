#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Program should accept exactly one argument\n");
        return 1;
    }
    
    // open the file specified with command line argument
    FILE *forensicImg = fopen(argv[1], 'r');
    // check that the file can be opened
    if (*forensicImg == NULL)
    {
        printf("Filter could not be opened\n");
        return 1;
    }
}
