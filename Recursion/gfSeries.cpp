/* The series follows this trend Tn = (Tn - 2)2 - (Tn - 1) in which the first and the second term are 0 and 1 respectively.Help Siddhant to find the first N terms of the series.
Input:
N = 3
Output:
0 1 -1
Explanation:
First-term is given as 0 and the second
term is 1. So the T3 = (T3-2)2 - (T3-1)
= T12 - T2 = 02 - 1 = -1
*/

#include <iostream>
#include <math.h>
using namespace std;
int help(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return pow(help(n - 2), 2) - help(n - 1);
}
void gfSeries(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << help(i) << " ";
    }
}
int32_t main()
{
    gfSeries(6);
    return 0;
}