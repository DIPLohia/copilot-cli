#include <stdio.h>

// Define structure
struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[100];
    int n = 0, i, choice, searchRoll;

    do {
        printf("\n--- Simple Student Record System ---\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("\nEnter Roll Number: ");
                scanf("%d", &s[n].roll);
                printf("Enter Name: ");
                scanf(" %[^\n]", s[n].name);  // reads string with spaces
                printf("Enter Marks: ");
                scanf("%f", &s[n].marks);
                n++;
                printf("Student added successfully!\n");
                break;

            case 2:
                printf("\nRoll No\tName\t\tMarks\n");
                for(i = 0; i < n; i++) {
                    printf("%d\t%s\t\t%.2f\n", s[i].roll, s[i].name, s[i].marks);
                }
                break;

            case 3:
                printf("\nEnter Roll Number to Search: ");
                scanf("%d", &searchRoll);
                for(i = 0; i < n; i++) {
                    if(s[i].roll == searchRoll) {
                        printf("Record Found!\n");
                        printf("Roll No: %d\n", s[i].roll);
                        printf("Name: %s\n", s[i].name);
                        printf("Marks: %.2f\n", s[i].marks);
                        break;
                    }
                }
                if(i == n)
                    printf("Student not found!\n");
                break;

            case 4:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    } while(choice != 4);

    return 0;
}
