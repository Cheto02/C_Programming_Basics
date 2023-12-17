#include <stdio.h>
#include <stdbool.h>
//&& logical op checks if atleast two conditions are true.
int main()
{
    float temp = 29;
    bool Sunny = false;//true

    if(temp >= 0 && temp <= 30 && Sunny)// everything here needs to be true
    {
        printf("The Weather is fine\n");
    }
    else
    {
        printf("The weather is Bad\n");
    }
    return 0;

}