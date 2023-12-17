#include <stdio.h>

int main()
{
    char name[25];
    int age;

    printf("\nWhats your name?");
    //scanf("%s", &name);
    //fgets(for full names/white spaces)
    fgets(name, 25, stdin);
    printf("Hello %s", name);
    
    printf("\nCan you input your age!");
    scanf("%d", &age);

    printf("\nYou are %d years old", age);

    return 0;

}