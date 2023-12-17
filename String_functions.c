#include <stdio.h>
#include <string.h>



int main()
{
    char string1[] = "Chettto";
    char string2[] = "chettto";

    //strlwr(string1); //convert string to lower case
    //strupr(string1); //convert string to uppercase
    //strcat(string1, string2 ); // concatenate the second string to the end of the first string
    //strncat(string1, string2, 2); // concatenate x number of letters per string 2
    //strcpy(string1, string2); // copy the contents of string two and replace them to string1
    //strncpy(string1, string2, 3);
    //strset(string1, 'J'); // sets all characters of a given string to a given character.
    //strnset(string1, 'X', 2); // set the first two letters of string1 to X.
    //strrev(string1); //reverse string.

    //int result = strlen(string1); //return string length as int
    //int result = strcmp(string1, string2); // compare all  characters for 
    // int result = strcmpi(string1, string2); //compare all and ignore Case
    int result = strnicmp(string1, string1, 1);// compare n characters, ignore case,


    //printf("%s",string1);
    printf("%d", result);
    {
        if(result == 0)
        {
            printf("\nThese strings are the same");
        }
        else
        {
            printf("\nNo way, these aint the same");
        }
    }

return 0;


}