#include <iostream>
#include <cstring>

using namespace std;

int palindrome ( char str [], int first, int last)
{
    if (first == last)
    return 1;
    else if (first +1 == last && str[first] == str [last])
    return 1;
    else
    {
        if (str[first] == str[last])
        {
            return palindrome (str, first + 1, last - 1);
        }
        else
        return 0;
    }
}

int main()
{
    char str[256];
    cout << "Enter the Word : ";
    cin >> str;
    
    int pal = palindrome (str,0,strlen(str) - 1);
    cout << "Palindrome : " << pal;

    return 0;
}
