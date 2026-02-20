public class count_dig {
    // tc : O(n) sc : O(1)
    static int sol(int n){
        int count = 0;
        while(n != 0){
            count++;
            n/=10;
        }
        return count;
    }
    // tc : O(1) sc : O(1)
    static int sol2(int n){
        if(n==0) return 0;
        return (int)Math.log10(Math.abs(n))+1; // abs for negative num
    }
}
