/*
Write a Program to Calculate the Electricity Bill. 
0 - 100 units price 3
100 - 500 units price 5
500 - 1000 units price 10
*/

#include <stdio.h>

int main()
{
    int units;
    float amount;
    
    printf ("Enter the Units Consumed : ");
    scanf("%d",&units);
    
    if (units > 0 && units <= 100)
    {
        amount = units * 3.0;
        printf("Amount for %d Units is = %f ", units , amount);
    }
    else if (units > 100 && units <= 500)
    {
        amount = 100 * 3.0 + ((units - 100) * 5 );
        printf("Amount for %d Units is = %f ", units , amount);
    }
    else if(units > 500 && units <= 1000)
    {
        amount = 100 * 3.0 + 400 * 5 + ((units - 500) * 10);
        printf("Amount for %d Units is = %f ", units , amount);
    }
    else
    {
        amount = units * 20;
        printf("Amount for %d Units is = %f ", units , amount);
    }

    return 0;
}
