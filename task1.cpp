#include <iostream>
using namespace std;
main()
{
    string fruit[4] = {"peach", "apple", "guava", "watermelon"};
    int price[4] = {60, 70, 40, 30};
    int quantity;
    string fruitName;
    int total;

    cout << "Enter Fruit Name: ";
    cin >> fruitName;

    cout << "Enter no. of kgs: ";
    cin >> quantity;

    for (int idx=0; idx < 4; idx++)
    {
        if (fruitName == fruit[idx])
        {
          total = idx;
        } 
    }
    total = price[total]*quantity;
    cout << "Total Price is : " << total;
}