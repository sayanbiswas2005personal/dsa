public class Number_palindrome_check {
    // tc : O(n) sc : O(1)
    static boolean isPalindrome(int x) {
        int org = Math.abs(x); // to handle the case of negative number
        int rev = 0;
        while(x!= 0){
            int temp = x % 10;
            rev = rev * 10 + temp;
            x/=10;
        }return rev==org;
    }
}
