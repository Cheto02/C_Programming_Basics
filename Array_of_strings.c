#include <stdio.h>
#include <string.h>

int main()
{
    char dogs[][30] = {"German Shperd", "Bulldog", "Mastiff", "Golden Retriever"};

    strcpy(dogs[0], "Fox");

    for(int i = 0; i < sizeof(dogs)/sizeof(dogs[0]); i++)
    {
        printf("%s\n", dogs[i]);

    }
    return 0;
}