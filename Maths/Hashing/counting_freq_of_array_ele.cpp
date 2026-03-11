#include <iostream>
using namespace std;
int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 1, 2, 3};
    int max_range = 5; 
    vector<int> freq(max_range + 1, 0);
    for(int num : arr){
        freq[num]++;
    }
    // using unordered_map
    unordered_map<int, int> freq_map;
    for(int num : arr){
        freq_map[num]++;
    }
}