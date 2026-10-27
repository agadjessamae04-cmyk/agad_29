#include <stdio.h>

int main() {
    int donors, i;
    int highDonors = 0;
    double donation, total = 0, average;

    printf("=== COMMUNITY DONATION PROGRAM ===\n");

    printf("Enter number of donors: ");
    if (scanf("%d", &donors) != 1 || donors <= 0) {
        printf("Invalid number of donors!\n");
        return 1;
    }

    for (i = 1; i <= donors; i++) {
        printf("\nDonor %d\n", i);
        printf("Enter donation amount: ₱");

        if (scanf("%lf", &donation) != 1) {
            printf("Invalid input!\n");
            return 1;
        }

        while (donation <= 0) {
            printf("Invalid donation! Enter an amount greater than 0: ₱");

            if (scanf("%lf", &donation) != 1) {
                printf("Invalid input!\n");
                return 1;
            }
        }

        total = total + donation;

        if (donation >= 1000) {
            highDonors++;
        }

        printf("Thank you for your donation of ₱%.2f!\n",
               donation);
    }

    average = total / donors;

    printf("\n=== DONATION SUMMARY ===\n");
    printf("Total Donations: ₱%.2f\n", total);
    printf("Average Donation: ₱%.2f\n", average);
    printf("Donors who gave ₱1,000 or more: %d\n",
           highDonors);

    printf("\nThank you to all our donors!\n");

    return 0;
}