#include <stdio.h>
#include <stdbool.h>//for true or false values

// =! Not logical operator reverses the state of a condition
int main()
{
   
    bool Sunny = true;// or false

    if(!Sunny)
 //   if(Sunny == 0)
    {
        printf("The Weather is fine, yeey!\n");
    }
    else
    {
        printf("Its cloudy!!\n");
    }
    return 0;

}