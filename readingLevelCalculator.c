#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string text = get_string("Text: ");
}

int countLetters(string text)
{
    int count = 0;
    
    for (int i = 0; i < strlen(text); i++)
    {
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
        {
            count++;
        }
    }
    
    return count;
}

int countWords(string text)
{
    return 0;
}

int countSentences(string text)
{
    return 0;
}
    
int calculateGrade(void)
{
    return 0;
}
