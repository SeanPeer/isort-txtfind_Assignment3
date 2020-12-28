#include "txtfind.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{

    char c, ans, temp;
    char str[LINE];
    char word[WORD];
    int i = 0;
    while (((c = getc(stdin)) != ' '))//Extracting the first word
    { 
        word[i++] = c;
    }
    word[i] = 0;

    while (((c = getc(stdin)) != '\n'))///Extracting the selecion through the txt file
    {
        ans = c;
        temp = c;
    }
    str[0] = temp;

    
    if (ans == 'a')//selected case a
    {
        print_lines(str, c, word);
    }
    else if (ans == 'b')//selected case b
    {

        print_similar_words(str, c, word);
    }

    return 0;
}
