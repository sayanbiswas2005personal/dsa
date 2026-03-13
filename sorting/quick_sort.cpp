#include <iostream>
#include <vector>
using namespace std;
void quickSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int partition_ind = partition(arr, low, high);
        quickSort(arr, low, partition_ind - 1);
        quickSort(arr, partition_ind + 1, high);
    }
}
int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[low];
    int i = low + 1;
    int j = high;
    while (true)
    {
        while (i <= high && arr[i] < pivot)
            i++;
        while (j >= low && arr[j] > pivot)
            j--;
        if (i >= j)
            break;
        swap(arr[i++], arr[j--]);
    }
    swap(arr[j], arr[low]);
    return j;
}