#include <iostream>
using namespace std;
main()
{
    int n;
    cout << "Enter Number of Transformation: ";
    cin >> n;
    int array1[3];

    for (int idx1 = 0; idx1 < 3; idx1++)
    {
        cout << "Enter Element: ";
        cin >> array1[idx1];
    }

    for (int x = 0; x < n; x++)
    {
        for (int idx = 0; idx < 3; idx++)
        {
            
            if (array1[idx] % 2 == 0)
            {
                array1[idx] = array1[idx] - 2;
            }
            if (array1[idx] % 2 != 0)
            {
                array1[idx] = array1[idx] + 2;
            }
        }
                
    }

    for (int idx = 0; idx < 3; idx ++)
        {
            cout << array1[idx] << " ";
        }

}