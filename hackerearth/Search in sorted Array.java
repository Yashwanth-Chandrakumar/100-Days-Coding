import java.util.ArrayList;
public class Solution {
    public static int search(ArrayList<Integer> arr, int n, int k) {
        for(int i=0;i<n;i++){
            if(arr.get(i)==k){
                return i;
            }
        }
        return -1;
    }
}
