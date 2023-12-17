#include <stdio.h>
#include <stdbool.h>
int main()
{
int x;
x = 123;
int y = 321;



int age = 21;
float GPA = 2.05;
char grade = 'C';
char name[] = "Bro";

char f = 110;
unsigned char g = 200;

short int h = 32768;
unsigned short int i = 65535;

int k = 3000000000;
unsigned int j = 4000000000;

bool e = true;

printf("You are %d years old\n", age);
printf("Your name is %s\n", name);
printf("Your average Grade is a: %c\n", grade);
printf("Your GPA is a: %.3f\n", GPA);
printf("%d\n", g);
printf("%d\n", h);
printf("%d\n", i);
printf("%d\n", k);
printf("%u\n", j);
return 0;

}