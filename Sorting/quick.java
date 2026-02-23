public class quick {
    // tc O(nlogn) sc O(logn) but it can be O(n^2) in worst case when the array is already sorted or reverse sorted
    public void quickSort(int[] arr, int low, int high) {
        if(low < high){
            int p_index = partition(arr,low,high);
            quickSort(arr,low,p_index-1);
            quickSort(arr,p_index+1,high);
        }
    }
    private int partition(int[] arr, int low, int high) {
        int pivot = arr[low];
        int i = low+1;
        int j = high;
        while(true){
            while(i <= high && arr[i] < pivot) i++;
            while(j >= low && arr[j] > pivot) j--;
            if(i > j) break;
            int temp = arr[i];
            arr[i]= arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
        int temp = arr[j];
        arr[j] = arr[low];
        arr[low] = temp;
        return j;
    }
    void print(int[] nums){
        for(int i=0; i<nums.length; i++){
            System.out.print(nums[i] + " ");
        }
        System.out.println();
    }
    public static void main(String[] args) {
        int[] nums = {5, 4, 1, 8, 2};
        quick q = new quick();
        q.quickSort(nums,0,nums.length-1);
        q.print(nums);  
    }
}
