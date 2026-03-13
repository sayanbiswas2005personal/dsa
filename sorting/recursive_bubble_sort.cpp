#include <iostream>
using namespace std;
void bubble_sort(vector<int>& arr,int n){
    if(n == 0) return;
    bool swapped = false;
    for(int j=0; j<n-1; j++){
        if(arr[j] > arr[j+1]){
            swap(arr[j],arr[j+1]);
            swapped = true;
        }
    }
    if(!swapped) return;
    bubble_sort(arr,n-1);
}