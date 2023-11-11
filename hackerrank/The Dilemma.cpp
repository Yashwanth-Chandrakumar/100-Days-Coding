import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int N = scanner.nextInt(); 
        int[] array = new int[N];
        
        for (int i = 0; i < N; i++) {
            array[i] = scanner.nextInt();
        }
        
        long product = 1;
        int gcd = array[0]; 
        
        for (int i = 0; i < N; i++) {
            product = (product * array[i]) % 1000000007;
            gcd = gcd(gcd, array[i]);
        }
        
        long result = (power(product, gcd, 1000000007)) % 1000000007;
        
        System.out.println(result);
        
        scanner.close();
    }
    
    public static int gcd(int a, int b) {
        if (b == 0) {
            return a;
        }
        return gcd(b, a % b);
    }
    
    public static long power(long x, int y, int mod) {
        long result = 1;
        x = x % mod;
        
        while (y > 0) {
            if (y % 2 == 1) {
                result = (result * x) % mod;
            }
            x = (x * x) % mod;
            y = y / 2;
        }
        
        return result;
    }
}
