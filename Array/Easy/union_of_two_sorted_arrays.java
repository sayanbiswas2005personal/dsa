import java.util.ArrayList;

public class union_of_two_sorted_arrays {
    public static ArrayList<Integer> findUnion(int a[], int b[]) {
        int left = 0,right = 0;
        ArrayList<Integer> ans = new ArrayList<>();
        while(left < a.length && right < b.length){
            if(a[left] < b[right]){
                if(ans.isEmpty() || ans.get(ans.size()-1) != a[left]){
                    ans.add(a[left]);
                }
                left++;
            }else if(b[right] < a[left]){
                if(ans.isEmpty() || ans.get(ans.size()-1) != b[right]){
                    ans.add(b[right]);
                }
                right++;
            }else{
                if(ans.isEmpty() || ans.get(ans.size()-1) != a[left]){
                    ans.add(a[left]);
                }
                left++;
                right++;
            }
        }
        while(left < a.length){
            if(ans.isEmpty() || ans.get(ans.size()-1) != a[left]){
                ans.add(a[left]);
            }
            left++;
        }
        while(right < b.length){
            if(ans.isEmpty() || ans.get(ans.size()-1) != b[right]){
                ans.add(b[right]);
            }
            right++;
        }
        return ans;
    }
    // tc: O(n+m) sc: O(n+m)
    public static void main(String[] args) {
        int a[] = {1, 2, 3, 4, 5};
        int b[] = {2, 3, 4, 5, 6};
        ArrayList<Integer> ans = findUnion(a, b);
        for(int i : ans){
            System.out.print(i + " ");
        }
    }
}
