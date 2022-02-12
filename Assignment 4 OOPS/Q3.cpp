#include <iostream>
#include<string.h>
#include<ctype.h>   
using namespace std;

int isVowel (char ch)        // Function to check the vowel
{
    ch = toupper(ch);   // toupper Function i used to convert given characters into upper case;
    return (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}

int countVowel (char str[] , int n)   // Function to Count the Vowel
{
    if(n == 1)
    {
        return isVowel(str[n - 1]);
    }
    else
         return countVowel(str, n -1) + isVowel (str [n - 1]);
}

int main()
{
    char str[256];
    cout << "Enter the Word : ";
    cin >> str;
    
    int len = strlen (str);
    cout << "Total Vowels are : " << countVowel(str, len);

    return 0;
}
