#include <stdio.h>

/*
Write a C program that calculates world population growth each year for the next 100 years, using
the simplifying assumption that the current growth rate will stay constant. Print the results in a table.
The first column should display the year from 1 to 100. The second column should display the anticipated world
population at the end of that year. The third column should display the numerical increase in the world population
that would occur that year. Using your  results, determine the years in which the population would become double
and eventually quadruple what it is today.
*/
unsigned long long factorial_iterative(int n);
unsigned long long factorial_recursive(int n);


int main(void) {

    double currentPopulation;
    double growthRate;
    double population, increase;
    double doublePopulation, quadruplePopulation;
    int year;
    int yearDouble = -1, yearQuadruple = -1;

    // Input current population and growth rate
    printf("Enter current world population: ");
    scanf("%lf", &currentPopulation);

    printf("Enter annual growth rate (in percent, e.g., 0.1): ");
    scanf("%lf", &growthRate);

    // Initializations
    population = currentPopulation;
    doublePopulation = currentPopulation * 2;
    quadruplePopulation = currentPopulation * 4;

    // Table header
    printf("\nYear\tPopulation\t\tIncrease\n");
    printf("------------------------------------------------\n");

    for (year = 1; year <= 100; year++) {
        increase = population * growthRate;
        population += increase;

        printf("%3d\t%.0f\t\t%.0f\n", year, population, increase);

        if (population >= doublePopulation && yearDouble == -1) {
            yearDouble = year;
        }

        if (population >= quadruplePopulation && yearQuadruple == -1) {
            yearQuadruple = year;
        }
    }

    // Output summary
    if (yearDouble != -1)
        printf("\nPopulation will double by year %d.\n", yearDouble);
    if (yearQuadruple != -1)
        printf("Population will quadruple by year %d.\n", yearQuadruple);

    return 0;
}

