#include <stdio.h>

int main() {
    int stock = 200;
    int households;
    int request;
    int distributed = 0;
    int remaining = 200;
    int unfulfilled = 0;
    int i;

    do {
        printf("Enter number of households: ");

        if (scanf("%d", &households) != 1) {
            printf("Invalid input! Enter a whole number.\n");

            while ( != '\n');
            households = -1;
        } else if (households < 0) {
            printf("Number of households cannot be negative.\n");
        }

    } while (households < 0);

    for (i = 1; i <= households; i++) {

        do {
            printf("\nHousehold %d\n", i);
            printf("Enter number of relief packs requested: ");

            if (scanf("%d", &request) != 1) {
                printf("Invalid input! Enter a whole number.\n");

                while (!= '\n');
                request = -1;
            } else if (request < 0) {
                printf("Request cannot be negative.\n");
            }

        } while (request < 0);

        if (request <= remaining) {
            remaining = remaining - request;
            distributed = distributed + request;

            printf("Request FULFILLED.\n");
        } else {
            unfulfilled++;

            printf("Request NOT FULFILLED.\n");
            printf("Not enough relief packs available.\n");
        }
    }

    // Final summary
    printf("\n===== RELIEF PACK SUMMARY =====\n");
    printf("Total Packs Distributed: %d\n", distributed);
    printf("Remaining Packs: %d\n", remaining);
    printf("Unfulfilled Requests: %d\n", unfulfilled);

    return 0;
}
