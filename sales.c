#include <stdio.h>

int minValue(float sales_report[]) {
    int min = 0;
    for (int i = 1; i < 12; i++) {
        if (sales_report[i] < sales_report[min]) {
            min = i;
        }
    }
    return min;
}

int maxValue(float sales_report[]) {
    int max = 0;
    for (int i = 1; i < 12; i++) {
        if (sales_report[i] > sales_report[max]) {
            max = i;
        }
    }
    return max;
}

int main() {
    float sales_report[12] = {23458.01, 40112.00, 56011.85, 37820.88, 37904.67, 60200.22, 72400.31, 56210.89, 67230.84, 68233.12, 80950.34, 95225.22};
    char month[12][10] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    
    printf("Monthly sales report for 2022:\nMonth\t Sales\n");
    for (int i = 0; i < 12; i++) {
        printf("%-10s%12.2f\t \n", month[i], sales_report[i]);
    }

    int min_index = minValue(sales_report);
    int max_index = maxValue(sales_report);

    printf("\nSales summary:\n");
    printf("Minimum sales: %.2f (%s) \n", sales_report[min_index], month[min_index]);
    printf("Maximum sales: %.2f (%s)\n", sales_report[max_index], month[max_index]);
    printf("Average sales: \n");

    printf("\nSales report (Highest to lowest):\n");

    return 0;
}
