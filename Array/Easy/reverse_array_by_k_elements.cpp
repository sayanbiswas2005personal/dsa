#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Right rotation
void rotateRight(vector<int> &arr, int k)
{
    int n = arr.size();
    k = k % n;

    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());
}

// Left rotation
void rotateLeft(vector<int> &arr, int k)
{
    int n = arr.size();
    k = k % n;

    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());
    reverse(arr.begin(), arr.end());
}

int main()
{
    vector<int> arr = {1,2,3,4,5,6,7};
    int k = 2;
    rotateRight(arr, k); 
    for(int x : arr)
        cout << x << " ";

    return 0;
}