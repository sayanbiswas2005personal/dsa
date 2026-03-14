#include <iostream>
using namespace std;
int getSecondLargest(vector<int> &arr)
{
    int largest = INT_MIN;
    int second_largest = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > second_largest && arr[i] < largest)
        {
            second_largest = arr[i];
        }
    }
    return second_largest == INT_MIN ? -1 : second_largest;
}