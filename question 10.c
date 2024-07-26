#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_CONTACTS 12

typedef struct {
    char firstName[50];
    char lastName[50];
    char phoneNumber[15];
} Contact;

Contact contacts[MAX_CONTACTS];
int contactCount = 0;

void printContact(Contact c) {
    printf("First Name: %s\n", c.firstName);
    printf("Last Name: %s\n", c.lastName);
    printf("Phone Number: %s\n", c.phoneNumber);
}

void addContact(Contact c) {
    if (contactCount < MAX_CONTACTS) {
        contacts[contactCount++] = c;
    } else {
        printf("Contact list is full!\n");
    }
}

void deleteContact(int index) {
    if (index < 0 || index >= contactCount) {
        printf("Invalid index!\n");
        return;
    }

    for (int i = index; i < contactCount - 1; i++) {
        contacts[i] = contacts[i + 1];
    }
    contactCount--;
}

void updateContact(int index, Contact c) {
    if (index < 0 || index >= contactCount) {
        printf("Invalid index!\n");
        return;
    }

    contacts[index] = c;
}

void displayContacts() {
    for (int i = 0; i < contactCount; i++) {
        printf("Contact %d:\n", i + 1);
        printContact(contacts[i]);
        printf("\n");
    }
}

void printMenu() {
    printf("Menu:\n");
    printf("1. Add Contact\n");
    printf("2. Delete Contact\n");
    printf("3. Update Contact\n");
    printf("4. Display Contacts\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
}

int main() {
    int choice, index;
    Contact c;

    while (1) {
        printMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (contactCount < MAX_CONTACTS) {
                    printf("Enter first name: ");
                    scanf("%s", c.firstName);
                    printf("Enter last name: ");
                    scanf("%s", c.lastName);
                    printf("Enter phone number: ");
                    scanf("%s", c.phoneNumber);
                    addContact(c);
                } else {
                    printf("Contact list is full!\n");
                }
                break;
            case 2:
                printf("Enter index of contact to delete (1 to %d): ", contactCount);
                scanf("%d", &index);
                deleteContact(index - 1);
                break;
            case 3:
                printf("Enter index of contact to update (1 to %d): ", contactCount);
                scanf("%d", &index);
                if (index < 1 || index > contactCount) {
                    printf("Invalid index!\n");
                    break;
                }
                printf("Enter new first name: ");
                scanf("%s", c.firstName);
                printf("Enter new last name: ");
                scanf("%s", c.lastName);
                printf("Enter new phone number: ");
                scanf("%s", c.phoneNumber);
                updateContact(index - 1, c);
                break;
            case 4:
                displayContacts();
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
