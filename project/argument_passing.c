#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_number(const char *str) {
    if (*str == '\0')
        return 0;

    int i = 0;

    if (str[0] == '-' || str[0] == '+')
        i = 1;

    if (str[i] == '\0')
        return 0;

    for (; str[i] != '\0'; i++) {
        if (str[i] < '0' || str[i] > '9')
            return 0;
    }

    return 1;
}

void display_arguments(int argc, char *argv[]) {
    printf("\nNumber of arguments: %d\n", argc - 1);

    for (int i = 1; i < argc; i++)
        printf("Argument %d: %s\n", i, argv[i]);
}

void perform_operation(int argc, char *argv[]) {
    if (argc < 4) {
        printf("\nError: Missing arguments.\n");
        printf("Usage: %s <operation> <number1> <number2>\n", argv[0]);
        return;
    }

    if (!is_number(argv[2]) || !is_number(argv[3])) {
        printf("\nError: Arguments must be valid numbers.\n");
        return;
    }

    int num1 = atoi(argv[2]);
    int num2 = atoi(argv[3]);

    if (strcmp(argv[1], "add") == 0) {
        printf("\nOperation: Addition\n");
        printf("Result: %d\n", num1 + num2);
    }
    else if (strcmp(argv[1], "subtract") == 0) {
        printf("\nOperation: Subtraction\n");
        printf("Result: %d\n", num1 - num2);
    }
    else if (strcmp(argv[1], "multiply") == 0) {
        printf("\nOperation: Multiplication\n");
        printf("Result: %d\n", num1 * num2);
    }
    else if (strcmp(argv[1], "divide") == 0) {
        if (num2 == 0) {
            printf("\nError: Division by zero is not allowed.\n");
            return;
        }

        printf("\nOperation: Division\n");
        printf("Result: %.2f\n", (float)num1 / num2);
    }
    else {
        printf("\nError: Invalid operation '%s'.\n", argv[1]);
        printf("Supported operations: add, subtract, multiply, divide\n");
    }
}

int main(int argc, char *argv[]) {
    printf("=================================\n");
    printf("       ARGUMENT PASSING SYSTEM\n");
    printf("=================================\n");

    if (argc == 1) {
    printf("\nNo arguments were provided.\n");
    printf("Usage: %s <operation> <number1> <number2>\n", argv[0]);
    return 1;
}

if (strcmp(argv[1], "--help") == 0) {
    printf("\nArgument Passing System Help\n");
    printf("----------------------------\n");
    printf("Usage: %s <operation> <number1> <number2>\n", argv[0]);
    printf("\nOperations:\n");
    printf("  add       Addition\n");
    printf("  subtract  Subtraction\n");
    printf("  multiply  Multiplication\n");
    printf("  divide    Division\n");
    printf("\nExamples:\n");
    printf("  %s add 10 20\n", argv[0]);
    printf("  %s subtract 20 5\n", argv[0]);
    printf("  %s multiply 5 4\n", argv[0]);
    printf("  %s divide 20 5\n", argv[0]);
    return 0;
}

    display_arguments(argc, argv);
    perform_operation(argc, argv);

    return 0;
}
