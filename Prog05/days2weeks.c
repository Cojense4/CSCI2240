/*
* Auth: Connor Jensen
* Date: 04-01-24 (Due: 03-31-24)
* Course: CSCI-2240 (Sec: 001)
* Desc: PROG-05, days2weeks
*/
#include <stdio.h>

int main(void);

int main(void) {
    int u_entry;
    int weeks;
    int days;
    printf("*** Days to Weeks Program ***\n");
    do {
        printf("Enter the number of days (or 0 to quit): ");
        scanf("%d", &u_entry);
        weeks = u_entry/7;
        days = u_entry - (7 * weeks);
        printf("%d days amounts to: %d weeks, %d days.\n\n", u_entry, weeks, days);
    } while (u_entry != 0);
    printf("Thank you for playing!\n");
    return 0;
}
