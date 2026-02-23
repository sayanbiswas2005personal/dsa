public class largest_element_array {
    public static void main(String[] args) {
        int[] arr = {3, 5, 7, 2, 8};
        int largest = findLargest(arr);
        System.out.println("The largest element in the array is: " + largest);
    }

    public static int findLargest(int[] arr) {
        // tc: O(n) - we need to traverse the entire array once to find the largest element
        // sc: O(1) - we are using a constant amount of extra space to store the largest element
        int largest = arr[0];
        for (int i = 1; i < arr.length; i++) {
            if (arr[i] > largest) {
                largest = arr[i];
            }
        }
        return largest;
    }
}
