#include <stdio.h>
#include <stdlib.h> // For exit()

// Global variables
unsigned int defaultPin = 1234;
double currentBalance = 1000.00;
int loginAttempts = 0;
const int MAX_LOGIN_ATTEMPTS = 3;

// Function prototypes
void displayMenu(void);
void checkBalance(void);
void depositMoney(void);
void withdrawMoney(void);
int validatePin(void);

int main() {
    printf("Welcome to the Simple ATM\n");
    printf("=========================\n");

    if (!validatePin()) {
        printf("Too many incorrect PIN attempts. Exiting.\n");
        return 1; // Exit with an error code
    }

    printf("PIN Accepted!\n\n");

    // Menu loop will be added in the next commit
    printf("Main menu functionality to be added.\n");


    return 0;
}

// Basic PIN validation function
int validatePin() {
    unsigned int enteredPin;
    while (loginAttempts < MAX_LOGIN_ATTEMPTS) {
        printf("Please enter your 4-digit PIN: ");
        if (scanf("%u", &enteredPin) != 1) {
            printf("Invalid input. Please enter numbers only.\n");
            while (getchar() != '\n'); // Clear input buffer
            loginAttempts++;
            continue;
        }

        if (enteredPin == defaultPin) {
            return 1; // PIN correct
        } else {
            printf("Incorrect PIN. Please try again.\n");
            loginAttempts++;
            printf("Attempts remaining: %d\n", MAX_LOGIN_ATTEMPTS - loginAttempts);
        }
    }
    return 0; // PIN incorrect after max attempts
}

// Placeholder for displayMenu (to be implemented)
void displayMenu(void) {
    // To be implemented
}

// Placeholder for checkBalance (to be implemented)
void checkBalance(void) {
    // To be implemented
}

// Placeholder for depositMoney (to be implemented)
void depositMoney(void) {
    // To be implemented
}

// Placeholder for withdrawMoney (to be implemented)
void withdrawMoney(void) {
    // To be implemented
}
