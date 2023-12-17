#include <stdio.h>

void birthday(char name[], int age)
{
    printf("\nHappy birthday dear %s!", name);
    printf("\nYou are %d years old!", age);
}
int main()
{
    char name[] = "Difre";
    int age = 25;

    birthday(name, age);//call the birthday function once

    return 0;
}
//anything you are passing to a function is a paramenter ie name and age
// name is of type char and age is of type int