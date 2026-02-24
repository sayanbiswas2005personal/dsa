public class find_missing_number {
    int missingNum(int arr[]) {
        long n = arr.length+1;
        long sum = 0;
        long sumn = (n*(n+1))/2; // handle overflow
        for(int i=0; i<arr.length; i++){
            sum += arr[i];
        }
        return (int)(sumn-sum); // do typecasting to int as return type is int
    }
    // tc: O(n) sc: O(1)
    public static void main(String[] args) {
        find_missing_number obj = new find_missing_number();
        int arr[] = {1, 2, 3, 5};
        System.out.println(obj.missingNum(arr));    
    }
}
