// Lagrange's interpolation method
// not dubugged
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    float x[10], y[10], a, lix = 1;
    int i, j, n, value = 0;
    float lx[10];
    printf("\n enter the number of data point:");
    scanf("%d", &n);
    printf("\n enter the value of x :");
    scanf("%f", &a);
    printf("\n enter the x data:\n");
    for (i = 0; i < n - 1; i++)

    {
        scanf("%f", &x[i]);
    }
    printf("\n enter the f(x) data :\n");
    for (i = 0; i < n - 1; i++)
    {
        scanf("%f", &y[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (i != j)
            {
                lix = lix * ((a - x[j]) / (x[i] - x[j]));
            }
        }

        value = value + (y[i] * lix);
    }
    for (i = 0; i < n - 1; i++)
    {
    }
    printf("\n the floaterpolated value is:%f", value);
    return 0;
}