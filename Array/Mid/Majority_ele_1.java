public class Majority_ele_1 {
    public int majorityElement(int[] nums) {
        int element = 0;
        int count = 0;
        for(int i=0; i<nums.length; i++){
            if(count == 0){
                element = nums[i];
                count = 1;
            }
            else if(element == nums[i]){
                count++;
            }else{
                count--;
            }
        }
        return element;
    }
    // Time complexity: O(n)
    // Space complexity: O(1)
    public static void main(String[] args) {
        Majority_ele_1 solution = new Majority_ele_1();
        int[] nums = {2, 2, 1, 1, 1, 2, 2};
        int result = solution.majorityElement(nums);
        System.out.println("Majority element: " + result);
    }
}