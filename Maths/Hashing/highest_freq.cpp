#include <iostream>
using namespace std;
int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 1, 2, 3};
    int max_range = 5; 
    vector<int> freq(max_range + 1, 0);
    for(int num : arr){
        freq[num]++;
    }
    int max_freq = 0;
    int most_freq_ele = -1;
    for(int i = 0; i <= max_range; i++){
        if(freq[i] > max_freq){
            max_freq = freq[i];
            most_freq_ele = i;
        }
    }
    cout << "Most frequent element: " << most_freq_ele << " with frequency: " << max_freq << endl;
    // using unordered_map
    unordered_map<int, int> freq_map;
    for(int num : arr){
        freq_map[num]++;
    }
    max_freq = 0;
    most_freq_ele = -1;
    for(const auto& pair : freq_map){
        if(pair.second > max_freq){     
            max_freq = pair.second;
            most_freq_ele = pair.first;
        }
    }
    cout << "Most frequent element using unordered_map: " << most_freq_ele << " with frequency: " << max_freq << endl;
}   