#include <stdio.h>

int main()
{
    float sales_report[12] = {23458.01,40112.00, 56011.85, 37820.88, 37904.67, 60200.22, 72400.31, 56210.89, 67230.84, 68233.12, 80950.34, 95225.22 };
    char month[12][10] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    printf("Monthly sales report for 2022:\nMonth\t Sales\n");

    for (int i = 0; i < 12; i++)
    {
        printf("%-10s%12.2f\t \n", month[i], sales_report[i]);
    }
    

    printf("Sales summary:\n");
    for (int i=0; i<12;i++)
    {
        printf("");
    }
    printf("Minimum sales:"");
    printf("Maximum sales: \n");
    printf("Average sales: ");


    printf("Sales report (Highest to lowest):\n");

    
}