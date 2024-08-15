#include "Header.h"

string a1z26(string a)
{
    for (int i = 0; i < a.length(); i++)
    {
        if (int(a[i]) < 123 && int(a[i]) > 96)
        {
            cout << int(a[i]) - 96;
        }
        else if (int(a[i]) < 91 && int(a[i]) > 64)
        {
            cout << int(a[i]) - 64;
        }
        else if (int(a[i]) == 32)
        {
            cout << " ";
        }
        else
        {
            cout << a[i];
        }
        if (int(a[i + 1]) != 32 && int(a[i]) != 32 && i + 1 != a.length())
        {
            cout << "-";
        }
    }
    cout << endl;
    return a;
}
