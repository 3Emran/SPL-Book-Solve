#include<stdio.h>
#include<string.h> // Include string.h for string comparison functions

int main() {
    char repeat[4]; // Increased size to accommodate "yes" and "no"

    do {
        float area,r;
        printf("Radius = ?");
        scanf("%f", &r);
        area = 3.141593 * r * r;
        printf("Area = %.4f\n", area);

        printf("Do you want to repeat the calculation? (yes/no): ");
        scanf("%s", repeat);
    } while (strcmp(repeat, "yes") == 0 || strcmp(repeat, "Yes") == 0 || strcmp(repeat, "YES") == 0);

    // Additional functionality when user enters 'no'
    if (strcmp(repeat, "no") == 0 || strcmp(repeat, "No") == 0 || strcmp(repeat, "NO") == 0) {
        printf("Goodbye\n");
    }

    return 0;
}
