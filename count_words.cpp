#include <iostream>
#include <string>
using namespace std;

int Word_count(string text)
{

    int b, count1 = 0;
    for (int i = 0; i < text.length() - 1; i++)
    {
        count1 = count1 + 1;
    }
    return count1;

    // int ctr = 0;
    // for (int x = 0; x < text.length(); x++)
    // {
    //     if (text[x] == ' ')
    //         ctr++;
    // }
    // return ctr + 1;
}
int main()
{
    string str;
    cout << "enter a string : ";
    cin >> str;

    cout << "\n string length" << str.length();

    // cout << "\n no of words in a string : " << Word_count("cpp exercise");
    cout << "\n no of char in a string : " << Word_count("cpp exercise");
}

// #include <iostream>
// #include <string.h>
// using namespace std;
// int main()
// {
//     char str[50];
//     int count = 0, i;
//     cout << "Enter a string : ";
//     gets(str);
//     for (i = 0; str[i] != '\0'; i++)
//     {
//         if (str[i] == ' ')
//             count++;
//     }
//     cout << "Number of words in the string are: " << count + 1;
//     return 0;
// }