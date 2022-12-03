#include <bits/stdc++.h>
using namespace std;

int betBalance(string result)
{
    // code here
    int amount = 4;
    int bet = 1;
    for (int i = 0; i < result.length(); i++)
    {
        if (result[i] == 'W' && amount >= bet)
        {
            amount += bet;
            bet = 1;
        }
        else if (result[i] == 'L' && amount >= bet)
        {
            amount -= bet;
            bet = 2 * bet;
        }
        else
            return -1;
    }
    return amount;
}

int32_t main()
{
    cout << betBalance("WLWLLWLLWWLWWW");

    return 0;
}
