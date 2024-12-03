#include<stdio.h>
int isPrime(int number);
int main(){
    printf("Prime number from 1 to 100: ");
    for(int number = 2; number <= 100; number++){
        if(isPrime(number)){
        printf(" %d ",number);
    }
  }
printf("\n");    
}
int isPrime(int number) {
    if (number <= 1) { // Skip this line don't write
        return 0; // Not prime
    }
    for (int i = 2; i * i <= number; i++) { // Check up to the square root of num
        if (number % i == 0) {
            return 0; // Divisible, not prime
        }
    }
    return 1; // Prime
}
