#include <iostream>
using namespace std;
main()
{
    string s1;
    string s2;
    cout << "Enter string1: ";
    getline(cin, s1);
    cout << "Enter string2: ";
    getline(cin, s2);
    int count = 0;

    for (int i = 0; i < s2.length(); i++)
    {
        for (int j = 0; j < s1.length(); j++)
        {
            if (s2[j] == s1[i])
            {
                count++;
                s2[j] = '*';
                break;
            }

        }
    
    }
    cout << "Number of repeating alphabets are: " << count; 
}