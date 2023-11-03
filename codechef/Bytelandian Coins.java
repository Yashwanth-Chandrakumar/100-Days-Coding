import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef {
    public static void main(String[] args) throws java.lang.Exception {
        Scanner sc = new Scanner(System.in);
        while (sc.hasNext()) {
            long num = sc.nextLong();
            if (num < 0) {
                break;
            }
            long maxDollars = getMaxDollars(num, new HashMap<>());
            System.out.println(maxDollars);
        }
    }

    private static long getMaxDollars(long n, Map<Long, Long> dp) {
        if (n <= 2) {
            return n;
        }

        if (dp.containsKey(n)) {
            return dp.get(n);
        }

        long dollars = Math.max(n, getMaxDollars(n / 2, dp) + getMaxDollars(n / 3, dp) + getMaxDollars(n / 4, dp));
        dp.put(n, dollars);

        return dollars;
    }
}
