public class reverse_array {
    // tc:O(n/2) sc:O(1)
    static void helper(int arr[],int start,int end){
        if(start >= end) return;
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        helper(arr,start+1,end-1);
    }
    public void reverseArray(int arr[]) {
        // code here
        helper(arr,0,arr.length-1);
    }
}
