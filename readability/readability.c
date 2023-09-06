#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include<math.h>


int count_letter (string input);
int count_word (string input);
int count_sentence (string input);


int main(void)
{
        string input = get_string ("Text: ");

        int letter   =   count_letter   ( input);
        int word     =   count_word     ( input);
        int sentence =   count_sentence ( input);



        double L = ( letter /(float)  word) *100;
        double S = ( sentence /(float)word) *100;
        int index = round(0.0588 *  L - 0.296 *  S - 15.8);




        if (index < 1)
            {
                printf ("Before Grade 1\n");
            }
        else if (index >= 16)
            {
                printf ("Grade 16+\n");
            }
        else
            {
                printf("Grade %i\n", index);
            }



}

int count_letter (string input)
    {
        int count =0;
    for (int i=0 ; i<strlen(input);i++)
            {
        if(isalpha(input[i] )!= 0)
                 {
                    count ++;

                 }
            }
            return count;
    }

int count_word (string input)
    {
        int space=0;
        int count =0;
    for (int i=0 ; i<strlen(input);i++)
            {
        if (input[i] == ' ')
                    {
                        space++;
                        count = space+1;

                    }
            }
            return count;
    }


int count_sentence (string input)
    {
        int count =0;
        for (int i=0 ; i<strlen(input);i++)
            {
        if (input[i] == '.' || input[i] == '!' || input[i] == '?')
                    {

                        count++;


                    }

            }
            return count;

    }
