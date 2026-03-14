#include <iostream>
using namespace std;
int largest(vector<int> &arr)
{
    int ans = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = max(ans, arr[i]);
    }
    return ans;
}