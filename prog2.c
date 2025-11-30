#include <stdio.h>

int main() {
    int choice;

    while (1) {
        printf("\n====================================\n");
        printf("        MULTI UTILITY CONVERTER\n");
        printf("====================================\n");
        printf("1. Length Converter\n");
        printf("2. Area Calculator (L * B)\n");
        printf("3. Volume Calculator (L * W * H)\n");
        printf("4. Currency Converter\n");
        printf("5. Temperature Converter\n");
        printf("6. Mass/Weight Converter\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        /* LENGTH CONVERTER */
        if (choice == 1) {
            int opt;
            double value;
            printf("\n--- LENGTH CONVERTER ---\n");
            printf("1. Meter to Kilometer\n2. Kilometer to Meter\n");
            printf("3. Meter to Centimeter\n4. Centimeter to Meter\n");
            printf("Choose: ");
            scanf("%d", &opt);

            printf("Enter value: ");
            scanf("%lf", &value);

            switch (opt) {
                case 1: printf("Result: %.3lf km\n", value / 1000); break;
                case 2: printf("Result: %.3lf m\n", value * 1000); break;
                case 3: printf("Result: %.3lf cm\n", value * 100); break;
                case 4: printf("Result: %.3lf m\n", value / 100); break;
                default: printf("Invalid option!\n");
            }
        }

        /* AREA */
        else if (choice == 2) {
            double l, b;
            printf("\n--- AREA CALCULATOR ---\n");
            printf("Enter Length: ");
            scanf("%lf", &l);
            printf("Enter Breadth: ");
            scanf("%lf", &b);
            printf("Area = %.3lf sq.units\n", l * b);
        }

        /* VOLUME */
        else if (choice == 3) {
            double l, w, h;
            printf("\n--- VOLUME CALCULATOR ---\n");
            printf("Enter Length: ");
            scanf("%lf", &l);
            printf("Enter Width: ");
            scanf("%lf", &w);
            printf("Enter Height: ");
            scanf("%lf", &h);
            printf("Volume = %.3lf cubic units\n", l * w * h);
        }

        /* CURRENCY */
        else if (choice == 4) {
            int opt;
            double amount;
            printf("\n--- CURRENCY CONVERTER ---\n");
            printf("Exchange Rates:\n1 USD = 83 INR\n1 EUR = 90 INR\n\n");

            printf("1. INR to USD\n2. USD to INR\n");
            printf("3. INR to EUR\n4. EUR to INR\n");
            printf("Choose: ");
            scanf("%d", &opt);

            printf("Enter amount: ");
            scanf("%lf", &amount);

            switch (opt) {
                case 1: printf("USD: %.3lf\n", amount / 83); break;
                case 2: printf("INR: %.3lf\n", amount * 83); break;
                case 3: printf("EUR: %.3lf\n", amount / 90); break;
                case 4: printf("INR: %.3lf\n", amount * 90); break;
                default: printf("Invalid option!\n");
            }
        }

        /* TEMPERATURE */
        else if (choice == 5) {
            int opt;
            double t;
            printf("\n--- TEMPERATURE CONVERTER ---\n");
            printf("1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\n");
            printf("3. Celsius to Kelvin\n4. Kelvin to Celsius\n");
            printf("Choose: ");
            scanf("%d", &opt);

            printf("Enter temperature: ");
            scanf("%lf", &t);

            switch (opt) {
                case 1: printf("Fahrenheit: %.3lf°F\n", (t * 9/5) + 32); break;
                case 2: printf("Celsius: %.3lf°C\n", (t - 32) * 5/9); break;
                case 3: printf("Kelvin: %.3lf K\n", t + 273.15); break;
                case 4: printf("Celsius: %.3lf°C\n", t - 273.15); break;
                default: printf("Invalid option!\n");
            }
        }

        /* MASS / WEIGHT */
        else if (choice == 6) {
            int opt;
            double m;
            printf("\n--- MASS / WEIGHT CONVERTER ---\n");
            printf("1. Kilograms to Grams\n2. Grams to Kilograms\n");
            printf("3. Kilograms to Pounds\n4. Pounds to Kilograms\n");
            printf("Choose: ");
            scanf("%d", &opt);

            printf("Enter mass: ");
            scanf("%lf", &m);

            switch (opt) {
                case 1: printf("Grams: %.3lf g\n", m * 1000); break;
                case 2: printf("Kilograms: %.3lf kg\n", m / 1000); break;
                case 3: printf("Pounds: %.3lf lbs\n", m * 2.205); break;
                case 4: printf("Kilograms: %.3lf kg\n", m / 2.205); break;
                default: printf("Invalid option!\n");
            }
        }

        /* EXIT */
        else if (choice == 7) {
            printf("Exiting... Thank you!\n");
            break;
        }

        else {
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
