#include <stdio.h>
//for looops repeat a section of code x limited amount of times

int main()
{
    //for(int i = 1; i <= 10; i++)// print tests 10 times
    //for(int i = 1; i <= 10; i+=2)//increment by 2 each iteration
    for(int i = 10; i >= 1; i--)// count from 10 t0 1
    {
        printf("%d\n", i);
        //printf("Tests\n");
    }
    return 0;
}


