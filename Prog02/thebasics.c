/*
* Auth: Connor Jensen
* Date: 02-22-24 (Due: 02-25-24)
* Course: CSCI-2240 (Sec: 001)
* Desc: PROG-02, The Basics
*/
#include <stdio.h>
#include <float.h>

int main(void) {
    float floatnum;
    int intnum;
    char c;
    printf("Welcome to the silly basic C program!\nYou will be asked a series of silly questions...\n...and I will repeat what you've entered!\n\n");
    printf("Ready?\n\n");
    printf("Enter a floating-point number: ");
    scanf("%f", &floatnum);
    printf("\nGreat!\n");
    printf("Now enter an integer (can be signed): ");
    scanf("%d", &intnum);
    printf("\nGreat!\n");
    printf("Now enter a single character: ");
    scanf("%s", &c);

    printf("\nGreat!\tHere are the results:\n\tYour floating point number was: %f\n\tYour integer number was: %d\n\tYour character was: '%c'\n", floatnum, intnum, c);
    return 0;
}