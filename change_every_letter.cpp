#include <iostream>
#include <string>
using namespace std;

//  The range of ASCII values for uppercase letters A-Z is 65-90, and the range for lowercase letters a-z is 97-122

string change_letter(string str)
{
    for (int x = 0; x < str.length(); x++)
    {

        if (str[x] >= 65 && str[x] <= 90 || str[x] >= 97 && str[x] <= 122)
        {
            str[x] = (str[x] + 1);
        }
    }
    return str;
}

int main()
{
    cout << "Original string : w3resource";
    cout << "\nNew string : " << change_letter("w3resource");
    cout << "\n\nOriginal string : Python";
    cout << "\nNew string : " << change_letter("Python");
    return 0;
}
