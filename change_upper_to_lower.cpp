#include <iostream>
#include <string>
using namespace std;

string change_Case(string str)
{

    for (int x = 0; x < str.length(); x++)
    {
        if (str[x] >= 65 && str[x] <= 90)
        {
            str[x] = tolower(str[x]);
        }
        else
        {
            str[x] = toupper(str[x]);
        }
    }

    return str;
}

int main()
{

    cout << "Original string: Python, \nAfter changing cases : " << change_Case("Python") << endl;
    cout << "Original string: AbcdEFH Bkiuer,\nAfter changing cases : " << change_Case(" AbcdEFH Bkiuer") << endl;
    return 0;
}
