/*
* Auth: Connor Jensen
* Date: 03-05-24 (Due: 03-17-24)
* Course: CSCI-2240 (Sec: 001)
* Desc: PROG-04, Hometown Greeting
*/
#include <stdio.h>
#include <ctype.h>
#define MAXLEN 40
#define MAJOR_VER 1
#define MINOR_VER 4

/*Prototype*/
int main(void);

int main(void) {
    /*Part 1: get fullname*/
    char first[MAXLEN], last[MAXLEN], city[MAXLEN], state[MAXLEN];
    printf("*** A Silly Hometown Greeting Program (ver %d.%d) ***\n", MAJOR_VER,MINOR_VER);
    printf("Please enter your full name (first last): ");
    scanf("%39s %39s", first, last);
    first[0] = toupper(first[0]);
    last[0] = toupper(last[0]);
    printf("\bThank You!\n\n");
    printf("Please enter your hometown (City State): ");
    scanf("%39s %39s", city, state);
    city[0] = toupper(city[0]);
    state[0] = toupper(state[0]);
    printf("\nHello %s %s from %s, %s!\n", first, last, city, state);

    /*Part 2: get hometown*/
    printf("Here's what I've learned from you:\n-----------------------------------\n");
    printf("\tFirst Name:\t[%40s]\n",first);
    printf("\tLast Name:\t[%40s]\n",last);
    printf("\tHome City:\t[%-40s]\n",city);
    printf("\tHome State:\t[%-40s]\n",state);

    return 0;
}