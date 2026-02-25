public class Kadanes_algo {
    public int maxSubArray(int[] nums) {
        int max_sum = Integer.MIN_VALUE;
        int sum = 0;
        for (int i = 0; i < nums.length; i++) {
            sum += nums[i];
            max_sum = Math.max(max_sum, sum);
            if (sum < 0) {
                sum = 0;
            }
        }
        return max_sum;
    }

    // tc: O(n) sc: O(1)
    public static void main(String[] args) {
        Kadanes_algo obj = new Kadanes_algo();
        int[] nums = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
        System.out.println(obj.maxSubArray(nums));
    }
}
