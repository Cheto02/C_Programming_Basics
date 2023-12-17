#include <stdio.h>
#include <ctype.h>

int main()
{
    char unit;
    float temp;

    printf("\nIs the temperature in (F) or (C)?: ");
    scanf("%c", &unit);
    //unit = toupper(unit);
    //unit = tolower(unit);

    if(unit == 'C')
    {
        printf("\n Enter The temp in Celsius: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("\nThe temperature in Farehnheight is: %.1f", temp);
    }
    else if (unit == 'F')
    {
        printf("Enter The temp in Fahrenheight: ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("\nThe temperature in Celcius is: %.1f", temp);    /* code */
    }
    else
    {
        printf("%c is not a valid unit", unit);
    }
    return 0;
}

