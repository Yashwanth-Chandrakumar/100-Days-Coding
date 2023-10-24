import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigInteger;
import java.util.Random;
import java.util.Scanner;

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        Scanner sc = new Scanner(System.in);
        String input = sc.next();
        
        BigInteger n = new BigInteger(input);
        
        boolean isPrime = isProbablePrime(n, 5);
        
        if (isPrime) {
            System.out.print("prime");
        } else {
            System.out.print("not prime");
        }
        
        bufferedReader.close();
    }
    
    public static boolean isProbablePrime(BigInteger n, int k) {
        if (n.compareTo(BigInteger.valueOf(2)) < 0) {
            return false;
        }
        
        if (n.compareTo(BigInteger.valueOf(2)) == 0 || n.compareTo(BigInteger.valueOf(3)) == 0) {
            return true;
        }
        
        if (n.mod(BigInteger.valueOf(2)).equals(BigInteger.ZERO)) {
            return false;
        }
        
        BigInteger d = n.subtract(BigInteger.ONE);
        int r = 0;
        while (d.mod(BigInteger.valueOf(2)).equals(BigInteger.ZERO)) {
            d = d.divide(BigInteger.valueOf(2));
            r++;
        }
        
        for (int i = 0; i < k; i++) {
            BigInteger a = getRandomBigInt(BigInteger.valueOf(2), n.subtract(BigInteger.valueOf(2)));
            BigInteger x = a.modPow(d, n);
            
            if (x.equals(BigInteger.ONE) || x.equals(n.subtract(BigInteger.ONE))) {
                continue;
            }
            
            boolean isWitness = true;
            for (int j = 0; j < r - 1; j++) {
                x = x.modPow(BigInteger.valueOf(2), n);
                if (x.equals(n.subtract(BigInteger.ONE))) {
                    isWitness = false;
                    break;
                }
            }
            
            if (isWitness) {
                return false;
            }
        }
        
        return true;
    }
    
    public static BigInteger getRandomBigInt(BigInteger min, BigInteger max) {
        Random rand = new Random();
        BigInteger result;
        do {
            result = new BigInteger(max.bitLength(), rand);
        } while (result.compareTo(min) < 0 || result.compareTo(max) > 0);
        return result;
    }
}
