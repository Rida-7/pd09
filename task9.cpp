#include <iostream>
using namespace std;
main()
{
    string moves[10]={"Shimmy", "Shake", "Pirouette", "Slide", "BoxStep", "HeadSpin", "Dosado", "Pop", "Lock", "Arabesque"};
    int pin;
    cout << "Enter Pin: ";
    cin >> pin;

    int idx = 0;
    while(pin > 0)
    {
        int rem;
        rem = pin % 10;
        pin = pin / 10;

        cout << pin << " ";

    }

}