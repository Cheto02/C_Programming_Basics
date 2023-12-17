#include <stdio.h>

//the shortcut to if/else when returning/assigning a value
//The formart is return (condition) ? return a value x if true : return a value y if cond is false


int findMax(int x, int y)
{   
 //       if(x > y)
 //       {
 //           return x;
 //       }
 //       else
 //      {
 //          return y;
 //       }
        return(x > y) ? x : y;//
    }
int main()
{   
    int max = findMax(13, 4);
    //find maximum  of 2 ints
    printf("%d", max); //display wherever max is

    return 0;
}