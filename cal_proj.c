
#include <stdio.h>
int main()
{
    puts("\t\t\tSimple Calculator\n");
    puts("\tChoose Operation:");
    puts("=================================");
    puts("\t1. Addition");
    puts("\t2. Subtraction");
    puts("\t3. Multiplication");
    puts("\t4. Division\n");

    int cho,i;
    printf("Enter Your Choice (1 to 4): ");
    scanf("%d", &cho);

    int size;
    printf("Enter number of elements: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("At least one number is required.\n");
        return 0;
    }

    float arr[size];
    printf("Enter numbers:\n");
    for (i = 0; i < size; i++) {
        scanf("%f", &arr[i]);
    }

    float result = arr[0];

    switch (cho)
    {
        case 1: 
            for ( i = 1; i < size; i++) {
                result += arr[i];
            }
            printf("Result: %.2f\n", result);
            break;

        case 2: 
            for (i = 1; i < size; i++) {
                result -= arr[i];
            }
            printf("Result: %.2f\n", result);
            break;

        case 3:
            for (i = 1; i < size; i++) {
                result *= arr[i];
            }
            printf("Result: %.2f\n", result);
            break;

        case 4: 
            for ( i = 1; i < size; i++) {
                if (arr[i] == 0) {
                    printf("Error: Division by zero!\n");
                    return 0;
                }
                result /= arr[i];
            }
            printf("Result: %.2f\n", result);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

