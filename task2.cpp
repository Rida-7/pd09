#include <iostream>
using namespace std;
main()
{
    string movies[5] = {"gladiator", "starwars", "terminator", "takingLives", "tombRider"};

    string movieName;
    int total;
    cout << "Enter Movie Name: ";
    cin >> movieName;

    for (int idx = 0; idx < 5; idx++)
    {
        if (movieName == movies[idx])
        {
            total = idx;
        }
    }

    if (total % 2 != 0)
    {
        total = 0.05*500;
        total = 500 - total; 
    }
    else 
    {
        total = 0.1*500;
        total = 500 - total;
    }
    cout << "Total Price is: " << total;


}