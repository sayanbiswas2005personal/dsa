#include <iostream>
using namespace std;
void insertion_sort(vector<int>& arr,int ind){
    if(ind == arr.size()) return;
    int key = arr[ind];
    int j = ind - 1;
    while(j >= 0 && arr[j] > key){
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = key;
    insertion_sort(arr,ind+1);
}