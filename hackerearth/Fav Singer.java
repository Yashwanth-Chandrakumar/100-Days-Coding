import java.util.*;
import java.util.stream.Collectors;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt(); 
        long[] singers = new long[n];

        for (int i = 0; i < n; i++) {
            singers[i] = scanner.nextLong();  
        }
        Map<Long, Long> singerFrequency = Arrays.stream(singers)
                .boxed()
                .collect(Collectors.groupingBy(singer -> singer, Collectors.counting()));

        long maxFrequency = singerFrequency.values().stream()
                .mapToLong(Long::longValue)
                .max()
                .orElse(0);

        long countFavoriteSingers = singerFrequency.values().stream()
                .filter(frequency -> frequency == maxFrequency)
                .count();

        System.out.println(countFavoriteSingers);
    }
}
