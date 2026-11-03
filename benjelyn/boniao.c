#include <stdio.h>

int main() {
    int households, request;
    int remaining = 200;
    int distributed = 0;
    int unfulfilled = 0;
    int i;

  
    do {
        printf("Enter number of households: ");

        if (scanf("%d", &households) != 1) {
            printf("Invalid input! Enter a whole number.\n");
            while (getchar() != '\n');
            households = -1;
        } else if (households < 1) {
            printf("Enter at least 1 household.\n");
        }

    } while (households < 1);

    // Process each household
    for (i = 1; i <= households; i++) {
        do {
            printf("\nHousehold %d\n", i);
            printf("Enter relief packs requested: ");

            if (scanf("%d", &request) != 1) {
                printf("Invalid input! Enter a whole number.\n");
                while (getchar() != '\n');
                request = -1;
            } else if (request < 0) {
                printf("Request cannot be negative.\n");
            }

        } while (request < 0);

        if (request <= remaining) {
            remaining -= request;
            distributed += request;
            printf("Request FULFILLED.\n");
        } else {
            unfulfilled++;
            printf("Request NOT FULFILLED.\n");
            printf("Not enough relief packs.\n");
        }
    }

   
    printf("\n===== FINAL SUMMARY =====\n");
    printf("Total Packs Distributed: %d\n", distributed);
    printf("Remaining Packs: %d\n", remaining);
    printf("Unfulfilled Requests: %d\n", unfulfilled);

    return 0;
}
