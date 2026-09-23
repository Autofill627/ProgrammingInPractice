#include <stdio.h>

int main()
{
    float salaries[50];
    float total = 0;
    float average;
    float highest;
    float lowest;

    printf("MUNICIPAL EMPLOYEE SALARY ANALYSIS\n");
    printf("----------------------------------\n");

    // Capture salaries
    for (int i = 0; i < 50; i++)
    {
        printf("Enter salary for employee %d: ", i + 1);
        scanf("%f", &salaries[i]);

        total = total + salaries[i];
    }

    // Set first salary as highest and lowest
    highest = salaries[0];
    lowest = salaries[0];

    // Find highest and lowest
    for (int i = 1; i < 50; i++)
    {
        if (salaries[i] > highest)
        {
            highest = salaries[i];
        }

        if (salaries[i] < lowest)
        {
            lowest = salaries[i];
        }
    }

    // Calculate average
    average = total / 50;

    // Display results
    printf("\n--- SALARY REPORT ---\n");
    printf("Total salary: %.2f\n", total);
    printf("Average salary: %.2f\n", average);
    printf("Highest salary: %.2f\n", highest);
    printf("Lowest salary: %.2f\n", lowest);

    return 0;
}