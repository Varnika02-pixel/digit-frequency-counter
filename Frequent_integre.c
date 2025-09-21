#include <stdio.h>

int main() {
    long long num;             
    int count[10] = {0};       
    int digit, i;
    int most_digit = 0;        
    int most_count = 0;        

    
    printf("Enter a number: ");
    scanf("%lld", &num);

    
    if (num < 0) {
        num = -num;
    }

    
    while (num > 0) {
        digit = num % 10;      
        count[digit]++;        
        num = num / 10;       
    }

    
    for (i = 0; i < 10; i++) {
        if (count[i] > most_count) {
            most_count = count[i];
            most_digit = i;
        }
    }

    
    printf("Digit %d appears the most (%d times).\n", most_digit, most_count);

    return 0;
}