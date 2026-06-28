#include <stdio.h>

#define MAX_SEATS 10

int main() {
    // 0 = Available, 1 = Booked
    int seats[MAX_SEATS] = {0}; 
    int choice, seatNum;

    while (1) {
        printf("\n--- Ticket Booking System ---\n");
        printf("1. View Seats\n2. Book a Seat\n3. Cancel Booking\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nSeat Status (0: Available, 1: Booked):\n");
                for (int i = 0; i < MAX_SEATS; i++) {
                    printf("Seat %d: %s\n", i + 1, seats[i] ? "Booked" : "Available");
                }
                break;

            case 2:
                printf("Enter seat number (1-10): ");
                scanf("%d", &seatNum);
                if (seatNum < 1 || seatNum > MAX_SEATS) {
                    printf("Invalid seat number!\n");
                } else if (seats[seatNum - 1] == 1) {
                    printf("Seat already booked!\n");
                } else {
                    seats[seatNum - 1] = 1;
                    printf("Booking successful!\n");
                }
                break;

            case 3:
                printf("Enter seat number to cancel (1-10): ");
                scanf("%d", &seatNum);
                if (seatNum < 1 || seatNum > MAX_SEATS) {
                    printf("Invalid seat number!\n");
                } else if (seats[seatNum - 1] == 0) {
                    printf("Seat is already empty!\n");
                } else {
                    seats[seatNum - 1] = 0;
                    printf("Cancellation successful!\n");
                }
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}