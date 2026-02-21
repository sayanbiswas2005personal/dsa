import java.util.HashMap;
import java.util.Map;
import java.util.TreeMap;
public class frequency_of_array {
    static void using_array(int[] arr){
        int n = arr.length;
        // expecting range of 20
        int[] ans = new int[20];
        for(int i=0; i<n; i++){
            ans[arr[i]]+=1;
        }
        for(int i=0; i<n; i++){
            if(ans[i] != 0){
                System.out.println(i + " : " + ans[i]);
            }
        }
        // tc is O(n) and space is O(1) because of fixed size array
    }
    static void using_hashmap(int[] arr){
        int n = arr.length;
        HashMap<Integer, Integer> map = new HashMap<>();
        for(int i=0; i<n; i++){
            if(map.containsKey(arr[i])){
                map.put(arr[i], map.get(arr[i]) + 1);
            } else {
                map.put(arr[i], 1);
            }
        }
        for(Map.Entry<Integer, Integer> entry : map.entrySet()){
            System.out.println(entry.getKey() + " : " + entry.getValue());
        }
        // tc is O(n) because of hash map and space is O(n) because of hash map
    }
    static void using_tree_map(int[] arr){
        int n = arr.length;
        TreeMap<Integer, Integer> map = new TreeMap<>();
        for(int i=0; i<n; i++){
            if(map.containsKey(arr[i])){
                map.put(arr[i], map.get(arr[i]) + 1);
            } else {
                map.put(arr[i], 1);
            }
        }
        for(Map.Entry<Integer, Integer> entry : map.entrySet()){
            System.out.println(entry.getKey() + " : " + entry.getValue());
        }
        // tc is O(n log n) because of tree map and space is O(n) because of tree map
    }
    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5};
        using_array(arr);
        System.out.println("Using HashMap:");
        using_hashmap(arr);
        System.out.println("Using TreeMap:");
        using_tree_map(arr);
    }
}
