public class maximum_consequetive_ones {
    public int findMaxConsecutiveOnes(int[] nums) {
        int count = 0;
        int maxi = 0;
        for(int i=0; i<nums.length; i++){
            if(nums[i] == 1){
                count++;
            }else{
                maxi = Math.max(maxi,count);
                count = 0;
            }
        } maxi = Math.max(maxi,count);
        return maxi;
    }
    // tc: O(n) sc: O(1)
    public static void main(String[] args) {
        maximum_consequetive_ones obj = new maximum_consequetive_ones();    
        int arr[] = {1, 1, 0, 1, 1, 1};
        System.out.println(obj.findMaxConsecutiveOnes(arr));
    }
}
