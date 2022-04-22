#include <iostream>
#include <cstring>
using namespace std;

class concatenate_string
{
  private:
    char str[20];
  public:
    void get_string()
    {
      cout << "Enter your String : ";
      cin >> str;
    }
    void display_string()
    {
      cout << "Your Concatenated string  is : " << str;
    }
    concatenate_string operator +(concatenate_string x)
    {
      concatenate_string s;
      strcat(str , x.str);
      strcpy(s.str , str);
      return s;
    }
};
int main()
{
  concatenate_string str1 , str2 , str3;
  str1.get_string();
  str2.get_string();
  str3 = str1 + str2;
  str3.display_string();
  return 0;
}
