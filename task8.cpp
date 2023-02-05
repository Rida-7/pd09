#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "Enter a Number: ";
    cin >> size;
    string color[size];
    int time;

    for (int idx = 0; idx < size; idx++)
    {
        cout << "Enter Colour: ";
        cin >> color[idx];

    }
    int count = 0;
    for (int idx = 0; idx < size; idx++)
    {
        if (color[idx] != color[idx+1])
        
            count++;
    }

    time = (count-1) + (size*2);
    cout << "Time is " << time << " seconds";
    
}