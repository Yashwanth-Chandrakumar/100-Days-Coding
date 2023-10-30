import java.util.Scanner;

public class Main {

    private static int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    private static int lcm(int a, int b) {
        return a * (b / gcd(a, b));
    }

    private static int getTotalX(int[] a, int[] b) {
        int lcmA = a[0];
        for (int i = 1; i < a.length; i++) {
            lcmA = lcm(lcmA, a[i]);
        }

        int gcdB = b[0];
        for (int i = 1; i < b.length; i++) {
            gcdB = gcd(gcdB, b[i]);
        }

        int count = 0;
        int multiple = lcmA;

        while (multiple <= gcdB) {
            if (gcdB % multiple == 0) {
                count++;
            }
            multiple += lcmA;
        }

        return count;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        int m = scanner.nextInt(); 

        int[] a = new int[n];
        int[] b = new int[m];

        for (int i = 0; i < n; i++) {
            a[i] = scanner.nextInt();
        }

        for (int i = 0; i < m; i++) {
            b[i] = scanner.nextInt();
        }

        int result = getTotalX(a, b);
        System.out.println(result);
    }
}
