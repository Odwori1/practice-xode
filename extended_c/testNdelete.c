#include <stdio.h>

// Function prototypes
void sum(void);
void div(void);
void mul(void);
void sub(void);

int main()
{
    char operator;
    printf("Choose an operator (+ - / *): ");
    scanf(" %c", &operator);
    switch(operator)  // Added operator variable to switch statement
    {
        case '+':
            sum();
            break;
        case '/':
            div();
            break;
        case '*':
            mul();
            break;
        case '-':
            sub();
            break;
        default:  // Added default case for invalid operators
            printf("Invalid operator.\n");
            break;
    }
    return 0;
}

void sum(void)
{
    int a, b, sum;
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);  // Modified scanf to read in two integer values
    sum = a + b;
    printf("Sum of %d + %d = %d\n", a, b, sum);
}

void div(void)
{
    int a, b, div;
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);  // Modified scanf to read in two integer values
    if(b == 0)
    {
        printf("Error: division by zero.\n");
        return;
    }
    div = a / b;
    printf("Div of %d / %d = %d\n", a, b, div);
}

void mul(void)
{
    int a, b, mul;
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);  // Modified scanf to read in two integer values
    mul = a * b;
    printf("Mul of %d * %d = %d\n", a, b, mul);
}

void sub(void)
{
    int a, b, sub;
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);  // Modified scanf to read in two integer values
    sub = a - b;
    printf("Sub of %d - %d = %d\n", a, b, sub);
}
