// C++ program to sort a string of characters
// #include<bits/stdc++.h>
// using namespace std;

// // function to print string in sorted order
// void sortString(string &str)
// {
//     sort(str.begin(), str.end());
//     cout << str;
// }

// // Driver program to test above function
// int main()
// {
//     string s = "geeksforgeeks";
//     sortString(s);
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    string str;

    // char str[100];
    int i, j, len = 0;
    int count = 0;
    cout << "enter a string :";
    cin >> str;

    for (i = 0; i < len; i++)
    {
        for (j = i + 1; j < len; j++)
        {
            if (str[i] > str[j])
            {
                int temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    cout << "after sorting the given string : " << str;
}