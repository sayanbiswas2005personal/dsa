public class selection {
    // tc O(n^2) sc O(1)
    void selectionSort(int[] nums) {
        int n = nums.length;
        for(int i=0; i<n; i++){
            int mini = i;
            for(int j=i+1; j<n; j++){
                if(nums[mini] > nums[j]){
                    mini = j;
                }
            }
            int temp = nums[mini];
            nums[mini] = nums[i];
            nums[i] = temp;
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
        selection s = new selection();
        s.selectionSort(nums);
        s.print(nums);
    }
}
