public class sort_0_1_2 {
    public void sortColors(int[] nums) {
        int n = nums.length;
        int low = 0,mid = 0,high = n-1;
        while(mid <= high){
            if(nums[mid] == 0){
                int temp = nums[mid];
                nums[mid] = nums[low];
                nums[low] = temp;
                mid++;
                low++;
            }else if (nums[mid] == 1){
                mid++;
            }else{
                int temp = nums[mid];
                nums[mid] = nums[high];
                nums[high] = temp;
                high--;
            }
        }
    }
    // Time complexity: O(n)
    // Space complexity: O(1)
    public static void main(String[] args) {
        sort_0_1_2 solution = new sort_0_1_2();
        int[] nums = {2, 0, 2, 1, 1, 0};
        solution.sortColors(nums);
        System.out.print("Sorted array: ");
        for (int num : nums) {
            System.out.print(num + " ");
        }
    }
}
