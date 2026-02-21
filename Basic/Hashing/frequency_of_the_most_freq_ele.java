import java.util.Arrays;
public class frequency_of_the_most_freq_ele {
    static int maxFrequency(int[] nums, int k) {
        Arrays.sort(nums);
        int n = nums.length;
        int maxi = 0;
        long sum = 0;
        int j = 0, i = 0;
        while( j < n ){
            sum += nums[j];
            while((long)nums[j] * (j-i+1) > sum + k){
                sum -= nums[i];
                i++;
            }
            maxi = Math.max(maxi,j-i+1);
            j++;
        }
        return maxi;
    }
    public static void main(String[] args) {
        int[] nums = {1, 2, 4};
        int k = 5;
        System.out.println(maxFrequency(nums, k));
    }
}
