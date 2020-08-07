#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>

int countLetters(string text);
int countWords(string text);
int countSentences(string text);
int calculateGrade(int letters, int words, int sentences);

int main(void)
{
    string text = get_string("Text: ");
    int letters = countLetters(text);
    int words = countWords(text);
    int sentences = countSentences(text);
    int grade = calculateGrade(letters, words, sentences);
    
    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", grade);
    }
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
    
int calculateGrade(int letters, int words, int sentences)
{
    float L = letters / (float) words * 100; // Avg number of letters per 100 words
    float S = sentences / (float) words * 100; // Avg number of words per 100 sentences
    
    int grade = round(0.0588 * L - 0.296 * S - 15.8);
    
    return grade;
}
