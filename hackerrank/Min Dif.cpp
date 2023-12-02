import java.util.* ;

import java.io.*; 

 

public class Solution {

 

    static int minDiff(int n, int[] arr) {

        // Write your code here.

        int min_value=Integer.MAX_VALUE;

        Arrays.sort(arr);

        for(int i=1;i<arr.length;i++)

        {

            int curr_val=Math.abs(arr[i]-arr[i-1]);

            min_value=Math.min(min_value,curr_val);

        }

        return min_value;

 

    }

}
