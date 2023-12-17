#include <stdio.h>
//a function prototype is fucn declaration without a body
//it comes before the main
//it ensures that call made to a function have the correct arguments
void hello(char name[], int age);

int main()
{
    char name[] = "Chetto";
    int age = 26;

    hello(name, age);// watch out for missing arguments 

    return 0;

}

void hello(char name[], int age)
{
    printf("\nHello %s", name);
    printf("\nYou are %d year old", age);
}