#include <iostream>
using namespace std;
main()
{
    string element[4];
    for (int idx = 0; idx < 4; idx++)
    {
        cout << "Enter Element: ";
        cin >> element[idx];
    }
    if (element[0] == element[1] && element[1] == element[2] && element[2] == element[3])
    {
        cout << "TRUE!!";
    }
    else 
    {
        cout << "FALSE!!";
    }
}