#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "Enter a Number: ";
    cin >> size;
    int arr[size];
    bool flag = false;
    int rem;

    for (int idx = 0; idx < size; idx++)
    {
        cout << "Enter Element: ";
        cin >> arr[idx];
    }
    for (int idx = 0; idx < size; idx++)
    {
        rem = arr[idx] % 10;
        if (rem == 7)
        {
            flag = true;
        }
    }
    if (flag == true)
    {
        cout << "Boom!";
    }
    else 
    {
        cout << "There's no 7 in array";
    }
}