public class remove_duplicates_from_Sorted_array {
    public int removeDuplicates(int[] nums) {
        int ind = 1;
        int n = nums.length;
        for(int i=1; i<n; i++){
            if(nums[i-1] != nums[i]){
                nums[ind] = nums[i];
                ind++;
            }
        }
        return ind;
    }
    // tc O(n) sc O(1)
    public static void main(String[] args) {
        remove_duplicates_from_Sorted_array obj = new remove_duplicates_from_Sorted_array();
        int[] nums = {1, 1, 2, 2, 3 };
        int newLength = obj.removeDuplicates(nums);
        System.out.println("New length after removing duplicates: " + newLength);
        System.out.print("Array after removing duplicates: ");
        for (int i = 0; i < newLength; i++) {
            System.out.print(nums[i] + " ");    
        }
    }
}
