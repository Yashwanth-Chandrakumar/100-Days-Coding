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



public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(bufferedReader.readLine().trim());
        if(n%2==1){
            System.out.print("Weird");
        }
        else if(((n>=2 && n<=5)||n>20)&&(n%2==0)){
            System.out.print("Not Weird");
        }
        else{
            System.out.print("Weird");
        }
        bufferedReader.close();
    }
}
