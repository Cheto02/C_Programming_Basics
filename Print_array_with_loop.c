#include <stdio.h>
// an array is a data structure that can hold many values of the same data type
/*
int main()
{
    double marks[] = {45.5, 50.5, 60.5, 32.5};

    //printf("%.1lf", marks[0]);
    {
        for(int i = 0; i < 4; i++)
        {
            printf("%.1lf\n", marks[i]);
        }
        //printf("%.1d");
    }
    return 0;
}
*/
// Incase a user adds one more student mark

int main()
{
    double marks[] = {45.5, 50.5, 60.5, 32.5, 75.5, 90.9, 54.4};// calculate all the elements in this  array and loop as amany timees

    printf("%d bytes\n", sizeof(marks));// use sizeof operator to determine array size in bytes 5*8
   {
        for(int i = 0; i < sizeof(marks)/sizeof(marks[5]); i++)//total mks size/ index 2
        {
            printf("%.1lf\n", marks[i]);
        }
        //printf("%.1d");
    } 
    return 0;
}

