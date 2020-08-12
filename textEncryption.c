#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

void encryptText(string key, string text);

int main(int argc, string argv[])
{
    if (argc !=2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    else if (strlen(argv[1]) != 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }
    else
    {
        for (int i = 0; i < strlen(argv[1]); i++)
        {
            if (isdigit(argv[1][i]))
            {
                printf("ONLY ALPHABETICAL CHARACHTERS ALLOWED BRO!!!\n");
                return 1;
            }
            
            for (int j = 0; j < strlen(argv[1]); j++)
            {
                if (i != j && argv[1][i] == argv[1][j])
                {
                    printf("NO REPEATING CHARACTERS BRO!!!\n");
                    return 1;
                }
            }
        }
    }
    string key = argv[1];
    string plaintext = get_string("plaintext: ");
    printf("ciphertext: ");
    encryptText(key, plaintext);
    return 0;
}
