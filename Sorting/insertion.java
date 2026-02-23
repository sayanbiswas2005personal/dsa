public class insertion {
    // tc O(n^2) sc O(1)
    public void insertionSort(int arr[]) {
        int n = arr.length;
        for(int i=1; i<n; i++){
            int temp = arr[i];
            int j = i-1;
            while(j >=0 && arr[j] > temp){
                arr[j+1] = arr[j];
                j--;
            }
            arr[j+1] = temp;
        }
    }
    void print(int[] nums){
        for(int i=0; i<nums.length; i++){
            System.out.print(nums[i] + " ");
        }
        System.out.println();
    }
    public static void main(String[] args) {
        int[] nums = {5, 4, 1, 8, 2};
        insertion i = new insertion();
        i.insertionSort(nums);
        i.print(nums); 
    }
}
