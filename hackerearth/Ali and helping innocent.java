import java.util.Scanner;

public class TruckTagValidation {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String tag = sc.nextLine();

        boolean isValid = isTagValid(tag);
        if (isValid) {
            System.out.println("valid");
        } else {
            System.out.println("invalid");
        }
    }

    public static boolean isTagValid(String tag) {
        // Check if the length of the tag is 9 characters
        if (tag.length() != 9) {
            return false;
        }

        // Check the conditions for digits and letters
        for (int i = 0; i < tag.length(); i++) {
            char currentChar = tag.charAt(i);

            if (i % 2 == 0) {
                // Check if it's a digit and non-zero
                if (!Character.isDigit(currentChar) || currentChar == '0') {
                    return false;
                }

                // Check if the sum of consecutive digits is even
                if (i < tag.length() - 1) {
                    char nextChar = tag.charAt(i + 1);
                    int sum = Character.getNumericValue(currentChar) + Character.getNumericValue(nextChar);
                    if (sum % 2 != 0) {
                        return false;
                    }
                }
            } else {
                // Check if it's a vowel
                if (isVowel(currentChar)) {
                    return false;
                }
            }
        }

        return true;
    }

    public static boolean isVowel(char c) {
        return "AEIOUY".contains(String.valueOf(c));
    }
}
