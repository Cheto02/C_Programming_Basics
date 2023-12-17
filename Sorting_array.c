#include <stdio.h>

void sort(int array[], int size)// The sort function sorts the array using the bubble sort algorithm.
{
    for(int i = 0; i < size - 1; i++)//iterates over the array from the first element to the second-to-last element.
    {
        for(int j = 0; j < size - i - 1; j++)//iterates over the array from the first element to the second-to-last element minus the number of iterations of the outer loop.
        {
            if(array[j] > array[j+1])//if the current element is (greater/less than) than the next element.
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }//swaps the current element with next element if the current element is greater than the next element.
        }
    }
}


void printArray(int array[], int size)//The printArray function prints the sorted array to the console.
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}


int main()//The main function initializes an array of integers and its size.
{
    int array[] = {3, 8, 4, 9, 5, 7};
    int size = sizeof(array)/sizeof(array[0]);//calculates the size of the array by dividing the total size of the array by the size of one element.

    sort(array, size);//call to sort array
    printArray(array, size);//call to print array

    return 0;
}

//The main function calls the sort and printArray functions to sort and print the array.



/*
Bubble sort is a simple sorting algorithm that works by repeatedly swapping adjacent elements if they are in the wrong order. It is not suitable for large data sets as its average and worst-case time complexity is quite high 1.

Here’s how the algorithm works:

The algorithm traverses the array from left to right and compares adjacent elements.
If the left element is greater than the right element, the two elements are swapped.
This process is repeated until the array is sorted.
*/