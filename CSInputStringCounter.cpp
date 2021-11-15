// CSInputStringCounter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

char input[129];
char inputIndex;

#pragma warning(disable:4996)

int main()
{
    printf("Enter a string of at most 128 characters: ");
    scanf("%s", input);
    int len = strlen(input);

    for (int i = 0; i < len; ++i)
    {
	    if(input[i] < 65 || input[i] > 90)
	    {
		    printf("Not supported input string");
            return 0;
	    }
    }

    char currentChar = input[0];
    int charCount = 1;
    for (inputIndex = 1; inputIndex <= len; ++inputIndex)
    {
	    if(input[inputIndex] == currentChar || input[inputIndex] == EOF)
	    {
            charCount++;
	    }
        else
        {
            printf("%i%c", charCount, currentChar);
            currentChar = input[inputIndex];
            charCount = 1;
        }
    }
}