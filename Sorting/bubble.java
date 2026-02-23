public class bubble {
    // tc O(n^2) sc O(1)
    public void bubbleSort(int[] nums) {
        int n = nums.length;
        for(int i=n-1; i>=0; i--){
            boolean is_swapped = false;
            for(int j=0; j<i; j++){
                if(nums[j] > nums[j+1]){
                    int temp = nums[j];
                    nums[j] = nums[j+1];
                    nums[j+1] = temp;
                    is_swapped = true;
                }
            }
            if(!is_swapped){
                break;
            }
        }
    }
    void print(int[] nums){
        for(int i=0; i<nums.length; i++){
            System.out.print(nums[i] + " ");
        }
        System.out.println();
    }
    public static void main(String[] args) {
        int[] nums = {5, 4, 1, 3, 2};
        bubble b = new bubble();
        b.bubbleSort(nums);
        b.print(nums);
    }
}
