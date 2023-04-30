#include <iostream>
#include <string>
using namespace std;

int Word_count(string str1)
{
    int a, count = 0;

    for (int x = 0; x < str1.length() - 1; x++)
    {

        count = count + 1;
    }
    return count;
}
int Word_count1(string str2)
{

    int b, count1 = 0;
    for (int i = 0; i < str2.length() - 1; i++)
    {
        count1 = count1 + 1;
    }
    return count1;
}

int main()
{
    int count, count1;
    cout << "\n no of char in a string 1: " << Word_count("java");
    cout << "\n no of char in a string 1: " << Word_count1("python");
    cout << "\n  total no of char in string : " << (count + count1);
    return 0;
}
