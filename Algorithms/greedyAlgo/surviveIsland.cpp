/* ishika got stuck on an island. There is only one shop on this island and it is open on all days of the week except for Sunday. Consider following constraints:

N – The maximum unit of food you can buy each day.
S – Number of days you are required to survive.
M – Unit of food required each day to survive.
Currently, it’s Monday, and she needs to survive for the next S days.
Find the minimum number of days on which you need to buy food from the shop so that she can survive the next S days, or determine that it isn’t possible to survive.
*/

#include <iostream>
using namespace std;
int minimumDays(int s, int n, int m)
{
    int sunday = s / 7;
    int buyingDays = s - sunday;
    int requiredFood = s * m;
    int ans = 0;
    if (requiredFood % n == 0)
    {
        ans = requiredFood / n;
    }
    else
    {
        ans = requiredFood / n + 1;
    }
    if (ans <= buyingDays)
    {
        return ans;
    }
    return -1;
}

int32_t main()
{
    cout << minimumDays(28, 23, 10);
    return 0;
}