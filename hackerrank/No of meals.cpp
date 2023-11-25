/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{

        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();  // Number of test cases

        for (int t = 0; t < T; t++) {
            int N = sc.nextInt();  // Number of ingredients
            int[] count = new int[26];  // Array to store the frequency of each letter

            for (int i = 0; i < N; i++) {
                String ingredient = sc.next();
                for (char letter : ingredient.toCharArray()) {
                    count[letter - 'a']++;
                }
            }

            int maxMeals = Math.min(count['c' - 'a'], Math.min(count['o' - 'a'], Math.min(count['d' - 'a'], Math.min(count['e' - 'a'] / 2, Math.min(count['h' - 'a'], count['f' - 'a'])))));
            System.out.println(maxMeals);
        }
    }
}
