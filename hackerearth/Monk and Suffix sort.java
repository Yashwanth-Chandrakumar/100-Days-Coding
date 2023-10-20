Print the lexicographically kth smallest suffix of the string S.

Note:
Those who are not familiar with suffix and lexicographical order, can read about it from https://en.wikipedia.org/wiki/Suffix and https://en.wikipedia.org/wiki/Lexicographical_order.

Sample Input
aacb 3
Sample Output
b

Answer:
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;
class TestClass {
    public static void main(String args[] ) throws Exception {
        Scanner sc = new Scanner(System.in);
        
        // Step 1: Extract the input
        String inputStr = sc.next();
        int k = sc.nextInt();
        
        // Step 2: Generate suffixes
        String[] suffixes = new String[inputStr.length()];
        for (int i = 0; i < inputStr.length(); i++) {
            suffixes[i] = inputStr.substring(i);
        }
        
        // Step 4: Sort suffixes lexicographically
        Arrays.sort(suffixes);
        
        // Step 5: Print the k-th suffix
        System.out.println(suffixes[k - 1]);
        
        sc.close();   // Writing output to STDOUT
    }
}
