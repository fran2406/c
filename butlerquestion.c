
/* two_func.c -- a program using two functions in one file */

#include <stdio.h>

void butler(void);      /* ISO/ANSI C function prototyping */

int main(void)

{

    printf("I will summon the butler function.\n");

    butler();

    printf("Yes. Bring me some tea and writeable CD-ROMS.\n");



    return 0;

}



void butler(void)          /* start of function definition */

{
    char name [100];
    printf("What is your name?");
    scanf("%s", name);
    printf("You rang, %s?\n",name);

}
