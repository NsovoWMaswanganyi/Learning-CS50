//Nsovo W. Maswanganyi
//Exit 0

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int CalcScore(string word);
//Global Points Array
int POINTS [] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};

int main(void)
{


    string player1 = get_string("PLayer 1: ");
    string player2 = get_string("PLayer 2: ");

    int score1 = CalcScore(player1);
    int score2 = CalcScore(player2);

    if(score1>score2)
    {
        printf("Player 1 wins\n");
    }
    else if(score1<score2)
    {
        printf("Player 2 wins\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

//Calculating the score for an individual player
int CalcScore(string word)
{
    int score = 0;

    for(int i=0, len = strlen(word); i<len; i++)
    {
        if(isupper(word[i]))
        {
            score += POINTS[word[i]-'A'];
        }
        else if(islower(word[i]))
        {
            score += POINTS[word[i]-'a'];
        }
    }
    return score;
}

