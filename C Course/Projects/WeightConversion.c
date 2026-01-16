# include <stdio.h>

// Weight Conversion Calculator
int main() {

    printf("Weight Conversion Calculator\n");
    printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to Kilograms\n");

    int choice = 0;
    float kilograms = 0.0;
    float pounds = 0.0;
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1){
        // Kilograms to Pounds
        printf("Enter the weight in Kilograms: ");
        scanf("%f", &kilograms);
        pounds = kilograms * 2.20462;
        printf("%.2f kilograms is equal to %.2f Pounds", kilograms, pounds);
    }
    else if (choice == 2){
        // Pounds to Kilograms
        printf("Enter the weight in Pounds: ");
        scanf("%f", &pounds);
        kilograms = pounds / 2.20462;
        printf("%.2f Pounds is equal to %.2f Kilograms", pounds, kilograms);
    }
    else {
        printf("Your choice is unvalid!");
    }
    return 0;
}