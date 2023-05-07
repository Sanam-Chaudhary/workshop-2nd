#include <iostream>
using namespace std;
#define M 10;
class fuzzy_set
{
private:
    float b[10], a[10], inter[10], uni[10], compA[10], compB[10];
    char a1[10];
    int i, element;

public:
    void get_value()
    {
        cout << "\n enter the number of elements:\t";
        cin >> element;
        cout << "\n enter the value of set A and B:\t";
        for (i = 0; i < element; i++)
        {
            cin >> a1[i];
        }
    }
    void get_membership_value()
    {
        cout << "\n enter the membership value of set A:\t";
        for (i = 0; i < element; i++)
        {
            cin >> a[i];
        }
        cout << "\n enter the membership value of set B:\t";
        for (i = 0; i < element; i++)
        {
            cin >> b[i];
        }
    }
    void show_set()
    {
        cout << "\n set A={";
        for (i = 0; i < element; i++)
        {
            cout << "(" << a1[i] << "," << a[i] << ")\t";
        }
        cout << "}\n";
        cout << "\n set B={";
        for (i = 0; i < element; i++)
        {
            cout << "(" << a1[i] << "," << b[i] << ")\t";
        }
        cout << "}\n";
    }
    void intersection()
    {
        for (i = 0; i < element; i++)
        {
            if (a[i] > b[i])
            {
                inter[i] = b[i];
            }
            else
            {
                inter[i] = a[i];
            }
        }
        cout << "\n Intersection: \t";
        for (i = 0; i < element; i++)
        {
            cout << "\nA∩B(" << a1[i] << ")=\t" << inter[i];
        }
    }
    void UNION()
    {
        for (i = 0; i < element; i++)
        {
            if (a[i] < b[i])
            {
                uni[i] = b[i];
            }
            else
            {
                uni[i] = a[i];
            }
        }
        cout << "\n Union: \t";
        for (i = 0; i < element; i++)
        {
            cout << "\nAUB(" << a1[i] << ")=\t" << uni[i];
        }
    }
    void complement()
    {
        for (i = 0; i < element; i++)
        {
            compA[i] = 1 - a[i];
            compB[i] = 1 - b[i];
        }
        cout << "\n Complement of set A={";
        for (i = 0; i < element; i++)
        {
            cout << "(" << a1[i] << "," << compA[i] << ")\t";
        }
        cout << "}\n";
        cout << "\n Complement of set B={";
        for (i = 0; i < element; i++)
        {
            cout << "(" << a1[i] << "," << compB[i] << ")\t";
        }
        cout << "}\n";
    }
};
int main()
{
    fuzzy_set op1;
    op1.get_value();
    op1.get_membership_value();
    op1.show_set();
    op1.UNION();
    op1.intersection();
    op1.complement();
}
// A∩B