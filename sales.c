#include <stdio.h>

int minValue(float sales_report[])
{
    int min = 0;
    for (int i = 0; i < 12; i++)
    {
        if (sales_report[i] < sales_report[min])
        {
            min = i;
        }
    }
    return min;
}

int maxValue(float sales_report[])
{
    int max = 0;
    for (int i = 0; i < 12; i++)
    {
        if (sales_report[i] > sales_report[max])
        {
            max = i;
        }
    }
    return max;
}
float averageValue(float sales_report[])
{
    float total_sales_report = 0;
    for (int i = 0; i < 12; i++)
    {
        total_sales_report += sales_report[i];
    }
    return total_sales_report / 12;
}
void swap_elements(float sales_report[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
            if (sales_report[j] < sales_report[j + 1])
            {
                float temp = sales_report[j];
                sales_report[j] = sales_report[j + 1];
                sales_report[j + 1] = temp;
            }
    }
}
int main()
{
    float sales_report[12] = {23458.01, 40112.00, 56011.85, 37820.88, 37904.67, 60200.22, 72400.31, 56210.89, 67230.84, 68233.12, 80950.34, 95225.22};
    char month[12][10] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    char month_rev[12][10] = {"December", "November", "October", "September", "August", "July", "June", "May", "April", "March", "February", "January"};
    printf("Monthly sales report for 2022:\nMonth\t\t Sales\n");
    for (int i = 0; i < 12; i++)
    {
        printf("%-10s%12.2f\t \n", month[i], sales_report[i]);
    }

    int min_index = minValue(sales_report);
    int max_index = maxValue(sales_report);
    float avg_value = averageValue(sales_report);
    swap_elements(sales_report, 12);

    printf("\nSales summary:\n");
    printf("Minimum sales: %.2f (%s) \n", sales_report[min_index], month[min_index]);
    printf("Maximum sales: %.2f (%s)\n", sales_report[max_index], month[max_index]);
    printf("Average sales: %.2f \n", avg_value);

    printf("\nSix-month average report:\n");

    for (int i = 0; i < 7; i++)
    {
        float sum = 0;
        for (int j = i; j < i + 6; j++)
        { 
            sum += sales_report[j];
        }
        float average = sum / 6; // 
        printf("%s- %s: %.2f\n", month[i], month[i + 5], average);
    }
    printf("\nSales report (Highest to lowest):\nMonth\t\t Sales\n");
    for (int i = 0; i < 12; i++)
    {
        printf("%-10s%12.2f\t \n", month_rev[i], sales_report[i]);
    }

    return 0;
}
