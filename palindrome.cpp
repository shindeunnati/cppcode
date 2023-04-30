#include <iostream>
using namespace std;

int main()
{

    string str;
    int a = 0;
    cout << "enter a string : ";
    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == str[(str.length() - i - 1)])
        {
            // cout << "yes";
            a = 1;
        }
        else
        {
            a = 0;
            // cout << "no";
        }
    }
    if (a == 1)
    {
        cout << "palindrome : ";
    }
    else
    {
        cout << "no";
    }
}