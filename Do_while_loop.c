#include <stdio.h>

//do while- always excutes a block of code once, then checks a condition

int main()
{
    int number = 0;
    int sum = 0;

    do{
        printf("Please type in a number above 0: ");
        scanf("%d", &number);

        if(number > 0)
        {
            sum = sum + number;
        }
    }
    while (number > 0);
    
    printf("sum: %d", sum);
    
    return 0;
}