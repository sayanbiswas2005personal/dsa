import java.util.ArrayList;
import java.util.List;

public class merge {
    // tc O(nlogn) sc O(n)
    static void mergeele(int arr[],int low,int mid,int high){
        List<Integer> ans = new ArrayList<>();
        int left = low;
        int right = mid+1;
        while(left <= mid && right <= high){
            if(arr[left] < arr[right]){
                ans.add(arr[left]);
                left++;
            }else{
                ans.add(arr[right]);
                right++;
            }
        }
        while(left <= mid){
            ans.add(arr[left]);
            left++;
        }
        while(right <= high){
            ans.add(arr[right]);
            right++;
        }
        for(int i=low; i<= high; i++){
            arr[i] = ans.get(i - low);
        }
    }
    void mergeSort(int arr[], int l, int r) {
        // code here
        if(l >= r) return;
        int mid = (l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        mergeele(arr,l,mid,r);
    }
    void print(int[] nums){
        for(int i=0; i<nums.length; i++){
            System.out.print(nums[i] + " ");
        }
        System.out.println();
    }
    public static void main(String[] args) {
        int[] nums = {5, 4, 1, 8, 2};
        merge m = new merge();
        m.mergeSort(nums,0,nums.length-1);
        m.print(nums); 
    }
}
