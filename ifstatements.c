#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if(age >= 18)
    {
        printf("You are a minor!");
    }
    else if (age < 0)
    {
        printf("You havent been born yet");
    }
    else{
        printf("\nGood to go");
     }
        return 0;
}