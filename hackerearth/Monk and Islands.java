import java.util.*;
import java.io.*;

class Solution {
    static class Graph {
        private int vertices;
        private List<Integer>[] adjacencyList;

        public Graph(int vertices) {
            this.vertices = vertices;
            adjacencyList = new ArrayList[vertices + 1];
            for (int i = 1; i <= vertices; i++) {
                adjacencyList[i] = new ArrayList<>();
            }
        }

        public void addEdge(int source, int destination) {
            adjacencyList[source].add(destination);
            adjacencyList[destination].add(source);
        }

        public int findMinimumBridges(int start, int end) {
            Queue<Integer> queue = new LinkedList<>();
            int[] distance = new int[vertices + 1];
            Arrays.fill(distance, -1);

            queue.add(start);
            distance[start] = 0;

            while (!queue.isEmpty()) {
                int current = queue.poll();
                for (int neighbor : adjacencyList[current]) {
                    if (distance[neighbor] == -1) {
                        distance[neighbor] = distance[current] + 1;
                        queue.add(neighbor);
                    }
                }
            }

            return distance[end];
        }
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine());

        for (int t = 0; t < T; t++) {
            String[] nm = br.readLine().split(" ");
            int N = Integer.parseInt(nm[0]);
            int M = Integer.parseInt(nm[1]);

            Graph graph = new Graph(N);

            for (int m = 0; m < M; m++) {
                String[] xy = br.readLine().split(" ");
                int X = Integer.parseInt(xy[0]);
                int Y = Integer.parseInt(xy[1]);
                graph.addEdge(X, Y);
            }

            int minimumBridges = graph.findMinimumBridges(1, N);
            System.out.println(minimumBridges);
        }
    }
}
