//Nsovo W. Maswanganyi
//Exit 0

//A program to check students' reading level using input text from a book, etc.

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

//Prototyping - Giving C a bird's eye view of what is to come
int GetReadingScore(string text);
int count_letters(string text);
int count_words(string text);
int count_sentences(string text);


int main(void)
{
    string text = get_string("Text: ");

    int grade = GetReadingScore(text);
    
    //Decide the grading level
    if(grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if(grade > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n",grade);
    }

}

int GetReadingScore(string text)
{
    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);

    float L = ((float)letters/words)*100;
    float S = ((float)sentences/words)*100;

    float index = 0.0588 * L - 0.296 * S - 15.8;
    int grade = (int) round(index);

    return grade;
}

int count_letters(string text)
{
    //Plan1
    //Receive text
    //Iterate throughout the length of the text
    //Count how many characters there are, by checking if there aren't any white spaces
    //Keep track of the number of letters in some variable
    int sum = 0;
    for(int i=0, len = strlen(text); i < len; i++)
    {
        if(isalpha(text[i]))
        {
            sum++;
        }
    }
    return sum;
}

int count_words(string text)
{
    int sum = 1;
    for(int i=0, len = strlen(text); i < len; i++)
    {
        if(text[i]== ' ')
        {
            sum++;
        }
    }
    return sum;
}

int count_sentences(string text)
{
    int sum = 0;
    for(int i=0, len = strlen(text); i < len; i++)
    {
        //Using Unicode reference to check if the character at hand is a (.)/(!)/(?).
        if(text[i]==33 || text[i]==46 || text[i]==63)
        {
            sum++;
        }
    }
    return sum;
}
