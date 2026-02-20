public class armstrong_check {
    // tc : O(n) sc : O(1)
    static boolean armstrongNumber(int n) {
        int pow = (int)Math.log10(Math.abs(n))+1;
        int sum = 0;
        int org = n;
        while(n != 0){
            int temp = n % 10;
            sum += Math.pow(temp,pow);
            n/=10;
        }
        return sum==org;
    }
}
