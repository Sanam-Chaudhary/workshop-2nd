#include <stdio.h>
#include <conio.h>
#define N 10
int main()
{
    int i, j, tempA, tempB, n;
    float At=0,Aw=0;
    int r[N], b[N], c[N], t[N], w[N];
    printf("\n enter the num of processes:");
    scanf("%d", &n);
    printf("\n enter the release time and burst time:");
    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &r[i], &b[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (r[j] > r[j + 1])
            {
                tempA = r[j];
                r[j] = r[j + 1];
                r[j + 1] = tempA;
                tempB = b[j];
                b[j] = b[j + 1];
                b[j + 1] = tempB;
            }
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
    for(i=0;i<n;i++)
    {
        printf("\t  p%d\t\t%d\t\t%d\t\t\t%d\t\t%d\t\t\t%d\n",i+1,r[i],b[i],c[i],t[i],w[i]);
    }
    printf("\n avg. turn around time is %0.2f\n avg. wating time is %0.2f", At, Aw);
    return 0;
}