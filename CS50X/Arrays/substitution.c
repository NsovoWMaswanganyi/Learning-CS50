//Nsovo W. Maswanganyi
//Exit 0

//A program that encrypts text by form of substitution. A user provides plaintext(text that needs to be encrypted) and a key of 26 characters that will be used to cipher the plaintext(by performing substitution of plain text with key characters)

#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

string Encrypt(string key, string plaintext);

char ciphertext [1000];
const int SIZE = 26;
char Alphas [SIZE] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
int main(int argc, string argv[])
{
    bool valid = true, unique = true;
    if(argc != 2)
    {
        printf("Usage: %s key\n",argv[0]);
        return 1; //Error exit status
    }

    else
    {
        string key = argv[1];

        int keyLen = strlen(key);

        for(int i = 0; i < keyLen; i++)
        {
            if(!(isalpha(argv[1][i])))
            {
                valid = false;
                break;
            }

            for(int j = i + 1; j < keyLen; j++)
            {
                if(valid && (toupper(argv[1][i])==toupper(argv[1][j])))
                {
                    unique = false;
                    break;
                }
            }
        }

        if(keyLen != 26)
        {
            printf("Key must contain 26 characters.\n");
            return 1; //Error exit status
        }
        else if(!valid)
        {
            printf("Key contains invalid characters\n");
            return 1;
        }
        else if (!unique)
        {
            printf("Key contains duplicate characters\n");
            return 1;
        }
        else
        {
            string plaintext = get_string("plaintext: ");

            string Ciphertext = Encrypt(key,plaintext);

            printf("ciphertext: %s\n",Ciphertext);
            return 0; //Success Exit status
        }
    }
}
string Encrypt(string key, string plaintext)
{
    int lenP = strlen(plaintext);

    for(int i = 0; i < lenP; i++)
    {
        char currentChar = plaintext[i];
        //Check if currentChar is Alphabetic
        if(isalpha(currentChar))
        {
            char upperChar = toupper(currentChar);

            for (int x = 0; x < SIZE; x++)
            {
                if(upperChar == Alphas[x])
                {
                    if(islower(currentChar))
                    {
                        ciphertext[i] = tolower(key[x]); //The actual substitution
                    }
                    else
                    {
                        ciphertext[i] = toupper(key[x]);
                    }
                    break;
                }
            }
        }
        else
        {
            ciphertext[i] = currentChar;
        }
    }
    return ciphertext;
}
