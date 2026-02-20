public class reverse_num {
    // tc : O(n) sc : O(1)
    static int reverse(int x) {
        int rev = 0;
        while(x!= 0){
            int temp = x % 10;
            // to avoid over flow
            if(rev > Integer.MAX_VALUE/10 || rev == Integer.MAX_VALUE && temp > 7) return 0;
            if(rev < Integer.MIN_VALUE/10 || rev == Integer.MIN_VALUE && temp < -8) return 0;
            rev = rev * 10 + temp;
            x/=10;
        }return rev;
    }
}
