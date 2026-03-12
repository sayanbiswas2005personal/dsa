#include <iostream>
#include <vector>
using namespace std;
void mergeSort(vector<int> &arr, int l, int r)
{
    if (l >= r)
        return;
    int mid = (l + r) / 2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, r);
    merge(arr, l, mid, r);
}
void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> ans;
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
            ans.push_back(arr[left++]);
        else
            ans.push_back(arr[right++]);
    }
    while (left <= mid)
        ans.push_back(arr[left++]);
    while (right <= high)
        ans.push_back(arr[right++]);
    for (int i = low; i <= high; i++)
    {
        arr[i] = ans[i - low];
    }
}