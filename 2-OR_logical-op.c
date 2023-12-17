#include <stdio.h>
#include <stdbool.h>

// || OR logical operator checks to see if at least one conditions are true
int main()
{
    float temp = 129;
    //bool Sunny = false;//true

    if(temp <= 0 || temp >= 30)// everything here needs to be true
    {
        printf("The Weather is fine\n");
    }
    else
    {
        printf("The weather is Bad\n");
    }
    return 0;

}