#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main(int argc, string argv[])
{
    if(argc != 1)
        {
            printf("Error! \n");
            return 1;
        }
        string word = argv[1];

    for(int i =0; i<strlen(word);i++)
        {
            if (isalpha(word[i])!=0 || strlen(word) != 26)
                {
                    printf("Invalid! \n");
                    return 1;
                }
        }
    string plaintext =get_string("Plaintext: ");\
    printf("Ciphertext: ");


    for(int j=0; j< strlen(plaintext) ;j++ )
        {
            if(plaintext[j]==word[j])
                {
                    printf("%c",plaintext[j]);
                }
            
        }
}