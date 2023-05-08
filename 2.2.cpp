// program to impliment boolean product of two matrices;
#include <iostream>
using namespace std;
#define m 2
int main()
{
    int a[m][m], b[m][m], c[m][m], i, j, k, s = 0;
    cout << "\n enter a mat:";
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "\n enter b mat:\n";
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> b[i][j];
        }
    }
    cout << "\n boolean product:";
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            for (k = 0; k < m; k++)
            {
                s = s | (a[i][k] & b[k][j]);
            }
            c[i][j] = s;
            cout << c[i][j] << "\t";
            s = 0;
        }
        cout << "\n";
    }
}
