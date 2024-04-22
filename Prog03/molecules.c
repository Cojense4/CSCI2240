/*
* Auth: Connor Jensen
* Date: 02-21-24 (Due: 02-25-24)
* Course: CSCI-2240 (Sec: 001)
* Desc: PROG-03, Number of Water Molecules.
*/
#include <stdio.h>
#include <float.h>

int main(void) {
    const double mass_H20 = 3.0e-23L;
    const int qt2grams = 950;
    double qts, total_moles;

    printf("*** Water Molecules Counter ***\n");
    do {
        printf("Enter water quantity (in qts):");
        if (scanf("%lf", &qts) == 1) {
            break;
        } else {
            printf("Invalid input. Please enter a valid quantity.\n");
            while (getchar() != '\n');
        }
    } while (1);
    total_moles = (qts * qt2grams)/mass_H20;
    printf("Total Number of Molecules = %0.2e\n", total_moles);
    return 0;
}