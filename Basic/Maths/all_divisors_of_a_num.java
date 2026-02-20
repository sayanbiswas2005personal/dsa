import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class all_divisors_of_a_num {
    // tc:O(root(n)) sc:O(n) due to ArrayList
    public static void print_divisors(int n) {
        List<Integer> list = new ArrayList<>();
        for(int i=1; i*i<=n; i++){
            if(n%i == 0){
                list.add(i);
                if(n/i != i){
                    list.add(n/i);
                }
            }
        }
        Collections.sort(list);
        for(int i=0; i<list.size(); i++){
            System.out.print(list.get(i) + " ");
        }
    }
}
