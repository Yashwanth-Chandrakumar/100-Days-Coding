import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int K = scanner.nextInt();
        int N = scanner.nextInt();
        scanner.nextLine(); 
        
        String[] favoriteStrings = new String[K];
        String[] foundStrings = new String[N];
        
        for (int i = 0; i < K; i++) {
            favoriteStrings[i] = scanner.nextLine();
        }
        
        for (int i = 0; i < N; i++) {
            foundStrings[i] = scanner.nextLine();
        }
        
        for (int i = 0; i < N; i++) {
            String currentString = foundStrings[i];
            boolean isGood = false;
            
            if (currentString.length() >= 47) {
                isGood = true;
            } else {
                for (int j = 0; j < K; j++) {
                    if (currentString.contains(favoriteStrings[j])) {
                        isGood = true;
                        break;
                    }
                }
            }
            
            if (isGood) {
                System.out.println("Good");
            } else {
                System.out.println("Bad");
            }
        }
        
        scanner.close();
    }
}
