#include <stdio.h>

int main() {
    float principal, time, rate, sit;
    printf("Enter Principal amount (P): ");
    scanf("%f", &principal);

    printf("Enter Time period in years (T): ");
    scanf("%f", &time);

    printf("Enter Rate of interest (R): ");
    scanf("%f", &rate);

    
    sit = (principal * time * rate) / 100.0;

   
    printf("\n--- Results ---\n");
    printf("Principal Amount:  $%.2f\n", principal);
    printf("Time Period:       %.1f years\n", time);
    printf("Interest Rate:     %.2f%%\n", rate);
    printf("Simple Interest:   $%.2f\n", sit);
    printf("Total Amount:      $%.2f\n", principal + sit);

    return 0;
}
