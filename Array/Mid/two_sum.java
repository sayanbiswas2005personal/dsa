import java.util.HashMap;
import java.util.Map;

public class two_sum {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer,Integer> count = new HashMap<>();
        int n = nums.length;
        for(int i=0; i<n; i++){
            if(count.containsKey(target - nums[i])){
                return  new int[] {count.get(target-nums[i]),i};
            }
            count.put(nums[i],i);
        }
        return new int[]{};
    }
    // Time complexity: O(n)
    // Space complexity: O(n)
    public static void main(String[] args) {
        two_sum solution = new two_sum();
        int[] nums = {2, 7, 11, 15};
        int target = 9;
        int[] result = solution.twoSum(nums, target);
        System.out.println("Indices: " + result[0] + ", " + result[1]);
    }
}
