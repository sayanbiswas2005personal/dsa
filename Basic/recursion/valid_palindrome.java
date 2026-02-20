public class valid_palindrome {
    // tc :O(n/2) sc:O(1)
    static boolean helper(String s,int start,int end){
        while(start < end){
            while (start < end && !Character.isLetterOrDigit(s.charAt(start))) {
                start++;
            }
            while (start < end && !Character.isLetterOrDigit(s.charAt(end))) {
                end--;
            }
            if (Character.toLowerCase(s.charAt(start)) != 
                Character.toLowerCase(s.charAt(end))) {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
    static boolean isPalindrome(String s) {
        return helper(s,0,s.length()-1);
    }
}
