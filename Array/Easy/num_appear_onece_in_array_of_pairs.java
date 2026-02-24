public class num_appear_onece_in_array_of_pairs {
    public int singleNumber(int[] nums) {
        int ans = nums[0];
        for(int i=1; i<nums.length; i++){
            ans ^= nums[i];
        }return ans;
    }
    // tc: O(n) sc: O(1)
    public static void main(String[] args) {
        num_appear_onece_in_array_of_pairs obj = new num_appear_onece_in_array_of_pairs();
        int arr[] = {2, 2, 1};
        System.out.println(obj.singleNumber(arr));
    }
}
