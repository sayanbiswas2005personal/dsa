public class move_zeroes_to_the_end {
    public void moveZeroes(int[] nums) {
        int ind = 0;
        for(int i=0; i<nums.length; i++){
            if(nums[i] != 0){
                int temp = nums[ind];
                nums[ind++] = nums[i];
                nums[i] = temp;
            }
        }
    }
    public static void main(String[] args) {
        move_zeroes_to_the_end obj = new move_zeroes_to_the_end();
        int[] nums = {0, 1, 0, 3, 12};
        obj.moveZeroes(nums);
        for(int i : nums){
            System.out.print(i + " ");
        }
    }
}
