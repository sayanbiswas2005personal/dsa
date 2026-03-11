#include <iostream>
#include <vector>
using namespace std;

int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int max_freq = 0;
        int n = nums.size();
        long long sum = 0;
        int i = 0,j = 0;
        while(j < n){
            sum += nums[j];
            if(nums[j] * 1LL * (j-i+1) > sum + k){
                sum -= nums[i];
                i++;
            }
            max_freq = max(max_freq,j-i+1);
            j++;
        }return max_freq;
    }