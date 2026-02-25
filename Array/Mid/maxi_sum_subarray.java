import java.util.ArrayList;

public class maxi_sum_subarray {
    public ArrayList<Integer> findSubarray(int arr[]) {
        int n = arr.length;
        int start = 0,tempstart = 0,end = 0;
        int sum = 0;
        int maxi = -1;
        for(int i=0; i<n; i++){
            if(arr[i] >= 0){
                sum += arr[i];
                if(sum > maxi || (sum == maxi && (tempstart < start || (tempstart == start && i > end)))){
                    maxi = sum;
                    start = tempstart;
                    end = i;
                }
            }
            else{
                sum = 0;
                tempstart = i+1;
            }
        }
        ArrayList<Integer> ans = new ArrayList<>();
        if(maxi == -1){
            ans.add(-1);
            return ans;
        }
        for(int i=start; i<=end; i++){
            ans.add(arr[i]);
        }
        return ans;
    }
    // tc: O(n) sc: O(1)
    public static void main(String[] args) {
        maxi_sum_subarray obj = new maxi_sum_subarray();
        int[] arr = {1, 2, 5, -7, 2, 3};
        System.out.println(obj.findSubarray(arr));
    }
}
