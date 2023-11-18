int howManySatisfy(int n, int k, vector<int>& a) {
     int count = 0;

    for (int i = 0; i + 2 * k - 1 < n; i++) {
        int P = 0, Q = 0;

        for (int j = i; j < i + k; j++) {
            P += a[j];
        }

        for (int j = i + k; j < i + 2 * k; j++) {
            Q += a[j];
        }

        if (P > Q) {
            count++;
        }
    }

    return count;
}
