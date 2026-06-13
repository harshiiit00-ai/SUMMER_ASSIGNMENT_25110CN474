//code48 perfect number by Function
#include <stdio.h>
int isPerfect(int num){
    int sum=0;
    for(int i = 1; i <= num/2; i++) {
    if(num % i == 0) {
     sum += i;
    }
    }
    return (sum == num); 
}
int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if(isPerfect(number)) {
        printf("%d is a Perfect number.\n", number);
    } else {
        printf("%d is not a Perfect number.\n", number);
    }
    return 0;
}
