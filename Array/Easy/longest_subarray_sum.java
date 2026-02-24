import java.util.HashMap;

public class longest_subarray_sum {
    public int longestSubarray(int[] arr, int k) {
        int maxi = 0;
        int sum = 0;
        int n = arr.length;
        HashMap<Integer,Integer> prefixsum = new HashMap<>();
        for(int i=0; i<n; i++){
            sum += arr[i];
            if(sum == k){
                maxi = Math.max(maxi,i+1);
            }
            int rem = sum - k;
            if(prefixsum.containsKey(rem)){
                maxi = Math.max(maxi,i - prefixsum.get(rem));
            }
            if(!prefixsum.containsKey(sum)){
                prefixsum.put(sum,i);
            }
        }
        return maxi;
    }
    // tc: O(n) sc: O(n)
    public static void main(String[] args) {
        longest_subarray_sum obj = new longest_subarray_sum();
        int arr[] = {1, -1, 5, -2, 3};
        int k = 3;
        System.out.println(obj.longestSubarray(arr, k));    
    }
}
