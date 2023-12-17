#include <stdio.h>

//2D array is an array where each element is an entire array,useful for matrices,  grids or data tables
/*
int main()
{
    double numbers[2][3] = {{1.2, 1.3, 1.5},{2.1, 2.3, 2.4}};

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%.1lf ", numbers[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/

//Adding two more rows incase of a item added without changing the code
int main()
{
    double numbers[2][4] = {{1.2, 1.3, 1.5, 1.7},{2.1, 2.3, 2.4, 2.2}};

    int rows = sizeof(numbers)/sizeof(numbers[0]);
    int columns = sizeof(numbers[0])/sizeof(numbers[0][1]);

    printf("rows: %d\n", rows);
    printf("columns: %d\n", columns);


    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            printf("%.1lf   ", numbers[i][j]);
        }
        printf("\n");
    }
    return 0;
}