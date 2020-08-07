#include <stdio.h>
#include <cs50.h>
#include <string.h>

int countLetters(string text);
int countWords(string text);
int countSentences(string text);

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
    int count = 0;
    
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == ' ')
        {
            count++;
        }
    }
    
    return count + 1;
}

int countSentences(string text)
{
    int count = 0;
    
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            count++;
        }
    }
    
    return count;
}    
    
int calculateGrade(void)
{
    return 0;
}
