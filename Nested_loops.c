#include <stdio.h>
// a loop inside another loop

int main()
{
    int rows;
    int columns;
    char symbol;

    printf("\nEnter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns\n: ");
    scanf("%d", &columns);

    scanf("%c"); //

    printf("Enter your symbol\n: ");
    scanf("%c", &symbol);

    for(int i = 1; i <= rows; i++)
    {
        for(int k = 1; k <= columns;k++)
        {
            printf("%c", symbol);
        }
    printf("\n");//
    }

    return 0;
}