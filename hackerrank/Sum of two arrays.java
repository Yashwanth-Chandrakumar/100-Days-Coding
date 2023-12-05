import java.util.* ;
import java.io.*; 
public class Solution {
	public static int[] findArraySum(int[] a, int n, int[] b, int m) {
		StringBuilder ax = new StringBuilder();
        StringBuilder bx = new StringBuilder();
        
        for (int i = 0; i < n; i++) {
            ax.append(a[i]);
        }
        
        for (int j = 0; j < m; j++) {
            bx.append(b[j]);
        }

        int z = Integer.parseInt(ax.toString());
        int x = Integer.parseInt(bx.toString());
        int l = z + x;

        String[] arr = Integer.toString(l).split("");
        int[] brr = new int[arr.length];

        for (int i = 0; i < arr.length; i++) {
            brr[i] = Integer.parseInt(arr[i]);
        }

        return brr;
	}
}
