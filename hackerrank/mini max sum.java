Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers. 
  Then print the respective minimum and maximum values as a single line of two space-separated long integers.

Print two space-separated integers on one line: the minimum sum and the maximum sum of  of  elements.

Input Format

A single line of five space-separated integers.

Output Format

Print two space-separated long integers denoting the respective minimum and maximum values that can be calculated by summing exactly four of the five integers. (The output can be greater than a 32 bit integer.)

Sample Input

1 2 3 4 5
Sample Output

10 14

  Answer:

import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;

class Result {

    /*
     * Complete the 'miniMaxSum' function below.
     *
     * The function accepts INTEGER_ARRAY arr as parameter.
     */

    public static void miniMaxSum(List<Integer> arr) {
        int n = arr.size();
        long brr[] = new long[n];
        for(int i=0;i<n;i++){
            brr[i]=arr.get(i);
        }
        long crr[] =new long[n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(j!=i){
                    crr[i]+=brr[j];
                }
            }
        }
        long max=0;
        long min = Long.MAX_VALUE;
        for(int i=0;i<n;i++){
            if(crr[i]>max){
                max=crr[i];
            }
            if(crr[i]<min){
                min=crr[i];
            }
        }
        System.out.print(min+" "+max);
    }

}

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        List<Integer> arr = Stream.of(bufferedReader.readLine().replaceAll("\\s+$", "").split(" "))
            .map(Integer::parseInt)
            .collect(toList());

        Result.miniMaxSum(arr);

        bufferedReader.close();
    }
}
