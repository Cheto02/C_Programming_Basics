#include <stdio.h>
#include <string.h>
// while loops repeat a section of code unilimited times
// they repeat while some condition is true
// they might also not execute at all

int main()
{

    char name[25];

    printf("\nWhats your name?:  ");
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0';

    while(strlen(name) == 0)// execute the code while the condition is true.
    {
        printf("\nYou did not enter your name");
        printf("\nWhats your name?:  ");
        fgets(name, 25, stdin);

        name[strlen(name)-1] = '\0';        
    }

    printf("Hello %s", name);

    return 0;

}