#include <stdio.h>
// continue skips the rest of the code and forces the next iteration of the loop
// break exits a loop or a switch


int main()
{
    for(int k = 0; k < 100; k++)
        {
            if(k == 56)
            {
                //break;
                continue;
            }    
            printf("%d\n", k);
        }
    return 0;
}