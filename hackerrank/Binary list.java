import java.util.* ;
import java.io.*; 

public class Solution {

    public static List<String> generateBinaryNumbers(int n) {
        List<String> arr=new ArrayList<>();
        for(int i=1;i<=n;i++){
            arr.add(Integer.toBinaryString(i));
        }
        return arr;
    }

}
