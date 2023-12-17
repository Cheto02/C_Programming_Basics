#include <stdio.h>

//switch statements-alternative to using many else ifs.
int main()
{
    char Grade;

    printf("\nEnter a letter Grade: ");
    scanf("%c", &Grade);

    switch (Grade)
    {
    case 'A':
        printf("Perfect!\n");
        break;
    case 'B':
        printf("Average!\n");
        break;
    case 'C':
        printf("Fair!\n");
        break;
    case 'D':
        printf("At least sio E!\n");
        break;
    case 'E':
        printf("Noma juu ya noma bro!\n");
        break;   
    default:
        printf("Please Enter a Valid letter Grade!\n");
    }
return (0);
}