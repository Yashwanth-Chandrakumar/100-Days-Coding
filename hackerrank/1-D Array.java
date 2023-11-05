import java.util.*;

public class Solution {

    public static boolean canWin(int leap, int[] game) {
        return canWinFromStart(leap, game, 0);
    }

    private static boolean canWinFromStart(int leap, int[] game, int position) {
        if (position < 0 || game[position] == 1) {
            return false;
        }

        if (position + leap >= game.length || position + 1 >= game.length) {
            return true;
        }

        game[position] = 1; // Mark the current cell as visited.

        return canWinFromStart(leap, game, position - 1) || canWinFromStart(leap, game, position + leap) || canWinFromStart(leap, game, position + 1);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int q = scanner.nextInt();

        while (q-- > 0) {
            int n = scanner.nextInt();
            int leap = scanner.nextInt();
            int[] game = new int[n];

            for (int i = 0; i < n; i++) {
                game[i] = scanner.nextInt();
            }

            boolean result = canWin(leap, game);
            System.out.println(result ? "YES" : "NO");
        }
        scanner.close();
    }
}
