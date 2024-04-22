#include <stdio.h>
#include <stdbool.h>
#define print_menu main
#define A_SIZE 32

int print_menu(void);

int print_menu(void) {
    int u_num;
    char u_fName[A_SIZE];
    bool got_fName = false;
    char u_lName[A_SIZE];
    bool got_lName = false;
    char u_city[A_SIZE];
    bool got_city = false;
    char u_state[A_SIZE];
    bool got_state = false;
    bool got_everything = false;
    bool try_exit = false;
    printf("*** User Information Menu System ***\n");
    do {
        printf("[1] Provide your First Name\n");
        printf("[2] Provide your Last Name\n");
        printf("[3] Provide Home City\n");
        printf("[4] Provide Home State\n");
        printf("[5] Exit\n");
        printf("Please make a selection and press [ENTER]: ");
        scanf("%d", &u_num);
        switch (u_num) {
            case 1:
                if (got_fName == false) {
                    printf("Enter your First Name: ");
                    scanf("%s", u_fName);
                    printf("Thank You.\n");
                    got_fName = true;
                    if (got_fName && got_lName && got_city && got_state) {
                        got_everything = true;
                    }
                } else {
                    printf("Already have a First Name\n");
                }
                break;
            case 2:
                if (got_lName == false) {
                    printf("Enter your Last Name: ");
                    scanf("%s", u_lName);
                    printf("Thank You.\n");
                    got_lName = true;
                    if (got_fName && got_lName && got_city && got_state) {
                        got_everything = true;
                    }
                } else {
                    printf("Already have a Last Name\n");
                }
                break;
            case 3:
                if (got_city == false) {
                    printf("Enter your Home City: ");
                    scanf("%s", u_city);
                    printf("Thank You.\n");
                    got_city = true;
                    if (got_fName && got_lName && got_city && got_state) {
                        got_everything = true;
                    }
                } else {
                    printf("Already have a Home City\n");
                }
                break;
            case 4:
                if (got_state == false) {
                    printf("Enter your Home State: ");
                    scanf("%s", u_state);
                    printf("Thank You.\n");
                    got_state = true;
                    if (got_fName && got_lName && got_city && got_state) {
                        got_everything = true;
                    }
                } else {
                    printf("Already have a Home State\n");
                }
                break;
            case 5:
                if (got_everything) {
                    printf("That's everything. Thanks!\n");
                    printf("User Info Summary:\n");
                    printf("First Name: %s\n", u_fName);
                    printf("Last Name: %s\n", u_lName);
                    printf("Home City: %s\n", u_city);
                    printf("Home State: %s\n", u_state);
                    break;
                } else if (try_exit == false) {
                    printf("You still have some info to provide\n");
                    try_exit = true;
                    break;
                } else {
                    printf("Ok, if you insist!\n");
                    if (got_fName) {
                        printf("First Name: %s\n", u_fName);
                    } else {
                        printf("First Name: (Not Given)\n");
                    }
                    if (got_lName) {
                        printf("Last Name: %s\n", u_lName);
                    } else {
                        printf("Last Name: (Not Given)\n");
                    }
                    if (got_city) {
                        printf("Home City: %s\n", u_city);
                    } else {
                        printf("Home City: (Not Given)\n");
                    }
                    if (got_state) {
                        printf("Home State: %s\n", u_state);
                    } else {
                        printf("Home State: (Not Given)\n");
                    }
                    try_exit = false;
                    break;
                }
            default:
                printf("Invalid selection!");
                break;
        }
    } while (u_num != 5 || try_exit == true);
    return 0;
} /* end print_menu() */

