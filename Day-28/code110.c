#include <stdio.h>
#include <string.h>
struct BankAccount {
    int accountNo;
    char name[50];
    float balance;
};
int main() {
    struct BankAccount accounts[50];
    int count = 0, choice, accNo, i;
    float amount;
    do {
        printf("\n===== Bank Account System =====\n");
        printf("1. Create Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Check Balance\n");
        printf("5. Display All Accounts\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter Account Number: ");
                scanf("%d", &accounts[count].accountNo);
                printf("Enter Name: ");
                scanf("%s", accounts[count].name);
                accounts[count].balance = 0;
                count++;
                printf("Account created successfully!\n");
                break;

            case 2:
                printf("Enter Account Number: ");
                scanf("%d", &accNo);
                for (i = 0; i < count; i++) {
                    if (accounts[i].accountNo == accNo) {
                    printf("Enter amount to deposit: ");
                    scanf("%f", &amount);
                    accounts[i].balance += amount;
                    printf("Deposited successfully! New Balance: %.2f\n", accounts[i].balance);
                    break;
                    }
                }
                if (i == count) printf("❌ Account not found.\n");
                break;
            case 3:
                printf("Enter Account Number: ");
                scanf("%d", &accNo);
                for (i = 0; i < count; i++) {
                    if (accounts[i].accountNo == accNo) {
                    printf("Enter amount to withdraw: ");
                    scanf("%f", &amount);
                    if (amount > accounts[i].balance) {
                    printf("Insufficient balance!\n");
                        } else {
                    accounts[i].balance -= amount;
                    printf("Withdrawn successfully! New Balance: %.2f\n", accounts[i].balance);
                        }
                    break;
                    }
                }
                if (i == count) printf("Account not found.\n");
                break;
            case 4:
                printf("Enter Account Number: ");
                scanf("%d", &accNo);
                for (i = 0; i < count; i++) {
                    if (accounts[i].accountNo == accNo) {
                    printf("Balance for %s (Acc No: %d): %.2f\n",
                        accounts[i].name, accounts[i].accountNo, accounts[i].balance);
                        break;
                    }
                }
                if (i == count) printf("Account not found.\n");
                break;
            case 5:
                printf("\n--- All Accounts ---\n");
                for (i = 0; i < count; i++) {
                    printf("Acc No: %d | Name: %s | Balance: %.2f\n",
                    accounts[i].accountNo, accounts[i].name, accounts[i].balance);
                }
                break;
            case 6:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 6);
    return 0;
}
