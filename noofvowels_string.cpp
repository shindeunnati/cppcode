#include <iostream>
using namespace std;

int main()
{
    int i, j, len = 0;
    int count = 0;
    string str;

    cout << "enter a string :";
    cin >> str;

    len = str.length();
    for (int i = 0; i < len; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            count++;
        }
    }
    cout << "no of vowels : " << count;
}
