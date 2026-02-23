public class second_largest_element {
    public static void main(String[] args) {
        int[] arr = {3, 5, 7, 2, 8};
        int secondLargest = findSecondLargest(arr);
        System.out.println("The second largest element in the array is: " + secondLargest);
    }

    public static int findSecondLargest(int[] arr) {
        // tc: O(n) - we need to traverse the entire array once to find the second largest element
        // sc: O(1) - we are using a constant amount of extra space to store the largest and second largest elements
        int largest = Integer.MIN_VALUE;
        int secondLargest = Integer.MIN_VALUE;

        for (int i = 0; i < arr.length; i++) {
            if (arr[i] > largest) {
                secondLargest = largest;
                largest = arr[i];
            } else if (arr[i] > secondLargest && arr[i] != largest) {
                secondLargest = arr[i];
            }
        }
        return secondLargest;
    }
}
