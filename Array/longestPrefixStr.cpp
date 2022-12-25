#include <iostream>
#include <string>
using namespace std;

string longestPrefix(string arr[], int N)
{
    int len = arr[0].length();
    for (int i = 1; i < N; i++)
    {
        int j = 0;
        while (j < arr[i].length() && arr[i][j] == arr[0][j])
            j++;
        len = min(len, j);
    }
    if (len == 0)
        return "-1";
    else
    {
        return arr[0].substr(0, len);
    }
}

int32_t main()
{
    string str[] = {"konon", "konon", "konab"};
    int n = sizeof(str) / sizeof(str[0]);
    cout << n << endl;
    cout << longestPrefix(str, n);
    return 0;
}
