// Lagrange's interpolation method
// not dubugged
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    float x[10], y[10], a, li, value = 0;
    int i, j, n;

    printf("\n enter the number of data point:");
    scanf("%d", &n);
    printf("\n enter the value of x :");
    scanf("%f", &a);
    printf("\n enter the x data:\n");
    for (i = 0; i < n; i++)

    {
        scanf("%f", &x[i]);
    }
    printf("\n enter the f(x) data :\n");
    for (i = 0; i < n; i++)
    {
        scanf("%f", &y[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            li = 1;
            if (i != j)
            {
                li = li * ((a - x[j]) / (x[i] - x[j]));
            }
        }

        value = value + (y[i] * li);
    }

    printf("\n the floaterpolated value is:%f", value);
    return 0;
}
