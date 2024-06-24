#include <stdio.h>
#include <string.h>

#define MAX_CONTACTS 12
#define NAME_LENGTH 50
#define PHONE_LENGTH 15

typedef struct {
    char firstName[NAME_LENGTH];
    char lastName[NAME_LENGTH];
    char phoneNumber[PHONE_LENGTH];
} Contact;

Contact contacts[MAX_CONTACTS];
int contactCount = 0;

void addContact() {
    if (contactCount >= MAX_CONTACTS) {
        printf("Contact list is full.\n");
        return;
    }

    Contact newContact;
    printf("Enter first name: ");
    scanf("%s", newContact.firstName);
    printf("Enter last name: ");
    scanf("%s", newContact.lastName);
    printf("Enter phone number: ");
    scanf("%s", newContact.phoneNumber);

    contacts[contactCount++] = newContact;
    printf("Contact added successfully.\n");
}

void deleteContact() {
    char firstName[NAME_LENGTH], lastName[NAME_LENGTH];
    printf("Enter first name of the contact to delete: ");
    scanf("%s", firstName);
    printf("Enter last name of the contact to delete: ");
    scanf("%s", lastName);

    for (int i = 0; i < contactCount; ++i) {
        if (strcmp(contacts[i].firstName, firstName) == 0 && strcmp(contacts[i].lastName, lastName) == 0) {
            for (int j = i; j < contactCount - 1; ++j) {
                contacts[j] = contacts[j + 1];
            }
            contactCount--;
            printf("Contact deleted successfully.\n");
            return;
        }
    }
    printf("Contact not found.\n");
}

void updateContact() {
    char firstName[NAME_LENGTH], lastName[NAME_LENGTH];
    printf("Enter first name of the contact to update: ");
    scanf("%s", firstName);
    printf("Enter last name of the contact to update: ");
    scanf("%s", lastName);

    for (int i = 0; i < contactCount; ++i) {
        if (strcmp(contacts[i].firstName, firstName) == 0 && strcmp(contacts[i].lastName, lastName) == 0) {
            printf("Enter new first name: ");
            scanf("%s", contacts[i].firstName);
            printf("Enter new last name: ");
            scanf("%s", contacts[i].lastName);
            printf("Enter new phone number: ");
            scanf("%s", contacts[i].phoneNumber);
            printf("Contact updated successfully.\n");
            return;
        }
    }
    printf("Contact not found.\n");
}

void displayContacts() {
    if (contactCount == 0) {
        printf("No contacts to display.\n");
        return;
    }

    for (int i = 0; i < contactCount; ++i) {
        printf("Contact %d:\n", i + 1);
        printf("First Name: %s\n", contacts[i].firstName);
        printf("Last Name: %s\n", contacts[i].lastName);
        printf("Phone Number: %s\n", contacts[i].phoneNumber);
    }
}

void displayMenu() {
    printf("Contact Management System\n");
    printf("1. Add Contact\n");
    printf("2. Delete Contact\n");
    printf("3. Update Contact\n");
    printf("4. Display Contacts\n");
    printf("5. Exit\n");
}

int main() {
    int choice;
    while (1) {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addContact();
                break;
            case 2:
                deleteContact();
                break;
            case 3:
                updateContact();
                break;
            case 4:
                displayContacts();
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
