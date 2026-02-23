public class rotate_array_with_k_ele {
    static void rot(int[] nums, int start, int end) {
        while (start < end) {
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;
            start++;
            end--;
        }
    }

    public void right_rotate(int[] nums, int k) {
        int n = nums.length;
        k = k % n;
        rot(nums, 0, n - 1);
        rot(nums, 0, k - 1);
        rot(nums, k, n - 1);
    }
    static void left_rotate(int[] nums, int k) {
        int n = nums.length;
        k = k % n;
        rot(nums, 0, k - 1);
        rot(nums, k, n - 1);
        rot(nums, 0, n - 1);
    }
    public static void main(String[] args) {
        rotate_array_with_k_ele obj = new rotate_array_with_k_ele();
        int[] nums = { 1, 2, 3, 4, 5, 6, 7 };
        int k = 3;
        obj.right_rotate(nums, k);
        for (int i : nums) {
            System.out.print(i + " ");
        }
        System.out.println();
        int[] nums2 = { 1, 2, 3, 4, 5, 6, 7 };
        left_rotate(nums2, k);
        for (int i : nums2) {
            System.out.print(i + " ");  
        }
    }
}
