#include <stdio.h>
#include <string.h>

//structs are a collection of related variables that can be of differeent data types
// listed under one name in a memory block
// very similar to classes in  other languages.
struct Colour
{
    char Name[12];
    int Val;
    double Price;
};

int main()
{
    struct Colour Colour1;
    struct Colour Colour2;
    struct Colour Colour3;

    strcpy(Colour1.Name, "Red");
    Colour1.Val = 1;
    Colour1.Price = 20.5;

    strcpy(Colour2.Name, "Green");
    Colour2.Val = 3;
    Colour2.Price = 15.4;

    strcpy(Colour3.Name, "Blue");
    Colour3.Val = 3;
    Colour3.Price = 19.5;


    printf("%s\n", Colour1.Name);
    printf("%d\n", Colour1.Val);
    printf("$%.1lf\n", Colour1.Price);

    printf("%s\n", Colour2.Name);
    printf("%d\n", Colour2.Val);
    printf("$%.1lf\n", Colour2.Price);

    printf("%s\n", Colour3.Name);
    printf("%d\n", Colour3.Val);
    printf("$%.1lf\n", Colour3.Price);

    return 0;
}