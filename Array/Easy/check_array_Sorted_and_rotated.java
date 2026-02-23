public class check_array_Sorted_and_rotated {
    public boolean check(int[] nums) {
        int n = nums.length;
        int count = 0;
        for(int i=0; i < n; i++){
            if(nums[i] > nums[(i+1)%n]) count++;
        }return count<=1;
    }
    // tc O(n) sc O(1)
    public static void main(String[] args) {
        check_array_Sorted_and_rotated obj = new check_array_Sorted_and_rotated();
        int[] nums = {3, 4, 5, 1, 2};
        boolean result = obj.check(nums);
        System.out.println("Is the array sorted and rotated? " + result);
    }
}
