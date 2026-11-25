#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main()
{
    string str, rev = "";
    cout << "Enter a string : ";
    getline(cin, str);

    string temp = "";

    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] != ' ')
        {
            temp += tolower(str[i]);
        }
    }

    for(int i = temp.length()-1; i >= 0; i--)
    {
        rev += temp[i];
    }

    if(temp == rev)
        cout << "String is Palindrome";
    else
        cout << "String is not Palindrome";

    return 0;
}

