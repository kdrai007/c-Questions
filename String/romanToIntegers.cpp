#include <bits/stdc++.h>
using namespace std;

int romanToDecimal(string str)
{

    map<char, int> roman;
    roman['I'] = 1;
    roman['V'] = 5;
    roman['X'] = 10;
    roman['L'] = 50;
    roman['C'] = 100;
    roman['D'] = 500;
    roman['M'] = 1000;
    int len = str.length();
    int i = 0;
    int sum = 0;
    while (i != len)
    {
        int num = 0;
        // IVII;
        if (i == len || (roman[str[i]] >= roman[str[i + 1]]))
        {
            num = roman[str[i]];
            i++;
        }
        else
        {
            num = roman[str[i]] - roman[str[i + 1]];
            i += 2;
        }

        sum += num;
    }
    return sum;
}

int main()
{
    cout << "Enter roman value in capital form like 'VIII': ";
    string str;
    cin >> str;
    cout << romanToDecimal(str);
    return 0;
}