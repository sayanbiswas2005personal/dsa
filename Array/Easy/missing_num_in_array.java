public class missing_num_in_array {
    int missingNum(int arr[]) {
        long n = arr.length + 1;
        long sum = 0;
        long sumn = (n * (n + 1)) / 2;
        for (int i = 0; i < arr.length; i++) {
            sum += arr[i];
        }
        return (int) (sumn - sum);
    }
    // tc: O(n) sc: O(1)

    public static void main(String[] args) {
        missing_num_in_array obj = new missing_num_in_array();
        int arr[] = { 1, 2, 3, 5 };
        System.out.println(obj.missingNum(arr));
    }
}
