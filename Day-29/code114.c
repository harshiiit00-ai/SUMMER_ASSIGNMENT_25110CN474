//code114
#include <stdio.h>
int main() {
    int arr[50], n = 0, choice, i, pos, val, found, temp;
    do {
        printf("\n===== Menu-Driven Array Operations =====\n");
        printf("1. Insert Element\n");
        printf("2. Display Array\n");
        printf("3. Search Element\n");
        printf("4. Delete Element\n");
        printf("5. Sort Array\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                if (n >= 50) {
                    printf("Array is full!\n");
                } else {
                    printf("Enter element to insert: ");
                    scanf("%d", &val);
                    arr[n++] = val;
                    printf("Element inserted successfully!\n");
                }
                break;
            case 2:
                if (n == 0) {
                    printf("⚠️ Array is empty!\n");
                } else {
                    printf("Array elements: ");
                    for (i = 0; i < n; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;
            case 3:
                printf("Enter element to search: ");
                scanf("%d", &val);
                found = 0;
                for (i = 0; i < n; i++) {
                    if (arr[i] == val) {
                        printf("Element found at position %d\n", i + 1);
                        found = 1;
                        break;
                    }
                }
                if (!found) printf("Element not found.\n");
                break;
            case 4:
                printf("Enter position to delete (1-%d): ", n);
                scanf("%d", &pos);
                if (pos < 1 || pos > n) {
                    printf("Invalid position!\n");
                } else {
                    for (i = pos - 1; i < n - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    n--;
                    printf("Element deleted successfully!\n");
                }
                break;
            case 5:
                for (i = 0; i < n - 1; i++) {
                    for (int j = i + 1; j < n; j++) {
                        if (arr[i] > arr[j]) {
                            temp = arr[i];
                            arr[i] = arr[j];
                            arr[j] = temp;
                        }
                    }
                }
                printf("Array sorted successfully!\n");
                break;
            case 6:
                printf("Exiting Array Operations System.!\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 6);
    return 0;
}
