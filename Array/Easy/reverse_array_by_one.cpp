#include <iostream>
#include <vector>
using namespace std;
void sol(vector<int>& arr){
    int x = arr[0];
    for(int i=1; i<arr.size(); i++){
        arr[i-1] = arr[i];
    }arr[arr.size()-1] = x;
}