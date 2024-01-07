#include<stdio.h>
#include<conio.h>
#define N 10
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int i, j, k, n, r[N], b[N], c[N], t[N], w[N];
    float At = 0, Aw = 0;
    int p[N];
    printf("\n enter the number of processes:");
    scanf("%d", &n);
    printf("\n enter the release time and burst time:");
    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &r[i], &b[i]);
        p[i] = i + 1;
    }
    // sorting in accordance to release time and burst time
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (r[j] > r[j + 1])
            {
                swap(&r[j], &r[j + 1]);
                swap(&b[j], &b[j + 1]);
                swap(&p[j], &p[j + 1]);
            }
            if (r[j] == r[j + 1])
            {
                if (b[j] > b[j + 1])
                {
                    swap(&r[j], &r[j + 1]);
                    swap(&b[j], &b[j + 1]);
                    swap(&p[j], &p[j + 1]);
                }
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%d\t%d\n", r[i], b[i]);
    }

    c[0] = b[0];
    for (j = 1; j < n; j++)
    {
        c[j] = (c[j - 1] >= r[j]) ? c[j - 1] + b[j] : r[j] + b[j];

        k = j - 1;
        while (k >= 0 && c[k] >= r[j])
        {
            if (b[k] > b[j])
            {
                swap(&r[k], &r[j]);
                swap(&b[k], &b[j]);
                swap(&p[k], &p[j]);
            }
            k--;
        }
    }

    int d = 0;
    for (i = 0; i < n; i++)
    {
        d += b[i];
        c[i] = d;
        t[i] = c[i] - r[i];
        w[i] = t[i] - b[i];
        At += t[i];
        Aw += w[i];
    }
    At = At / n;
    Aw = Aw / n;
    printf("\n\t process\trelease_time\tburst_time\tcompletion_time\t turn_around_time\twaiting_time\n");
    for (i = 0; i < n; i++)
    {
        printf("\t  p%d\t\t%d\t\t%d\t\t\t%d\t\t%d\t\t\t%d\n", p[i], r[i], b[i], c[i], t[i], w[i]);
    }
    printf("\n avg. turn around time is %0.2f\n avg. wating time is %0.2f", At, Aw);

    return 1;
}
