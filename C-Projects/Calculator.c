#include <stdio.h>
float a, b;
int main()
{
    int r;

    printf("Enter the type of calculation you want:\n    1--Addition\n    2--Subtraction\n    3--Multiplication\n    4--Division\n   ");
    scanf("%d", &r);

    if (r == 1)
    {
        printf("Enter the two numbers you want to add : \n");

        printf("Enter the 1st number : \n");
        scanf("%f", &a);
        printf("Enter the 2nd number : \n");
        scanf("%f", &b);

        float sum = a + b;
        printf("The sum of given two numbers is %f\n", sum);
    }

    else if (r == 2)
    {
        printf("Enter the two numbers you want to subtract : \n");
        printf("Enter the 1st number : \n");
        scanf("%f", &a);
        printf("Enter the 2nd number : \n");
        scanf("%f", &b);

        float subtract = a - b;
        printf("The subtract of given two numbers is %f\n", subtract);
    }

    else if (r == 3)
    {
        printf("Enter the two numbers you want to Multiply : \n");
        printf("Enter the 1st number : \n");
        scanf("%f", &a);
        printf("Enter the 2nd number : \n");
        scanf("%f", &b);

        float product = a * b;
        printf("The product of given two numbers is %f\n", product);
    }

    else if (r == 4)
    {
        printf("Enter the two numbers you want to divide : \n");

        printf("Enter the 1st number : \n");
        scanf("%f", &a);
        printf("Enter the 2nd number : \n");
        scanf("%f", &b);
        float Divide = a / b;
        printf("The division of given two numbers is %0.2f\n", Divide);
    }

    else {
   
        printf("Please select a suitable number.");
    }


    return 0;
}