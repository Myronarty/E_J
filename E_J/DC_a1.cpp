#include "Header.h"

string da1z26(string a)
{
    int j = 0;
    for (int i = 0; i < a.length(); ++i)
    {
        if (a[i] == ' ' || i == a.length() - 1)
        {
            string b;
            if (i == a.length() - 1)
            {
                b = a.substr(j, i - j + 1);
            }
            else
            {
                b = a.substr(j, i - j);
            }

            //cout << b << " ";
            j = i + 1;

            stringstream u(b);
            string b2;
            vector<int> v;
            while (getline(u, b2, '-'))
            {
                v.push_back(atoi(b2.c_str()));
            }
            for (const auto& q : v)
            {
                cout << static_cast<char>(int(q + 96));
            }
            cout << " ";
        }
    }



    /*while (int(a[i]) != 32)
    {
      stringstream u(a);
      string b;
      vector<string> v;
      while (getline(u, b, '-'))
      {
        v.push_back(b);
        for (const auto& q : v)
        {
          cout << "(" << q << ") ";
        }
      }
    }*/

    return a;
}