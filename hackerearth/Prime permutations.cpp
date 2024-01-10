bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int findPrimePermutations(int n) {
    vector<int> primes, composites;
    for (int i = 1; i <= n; ++i) {
        if (isPrime(i)) primes.push_back(i);
        else composites.push_back(i);
    }

    int primeCount = primes.size();
    int result = 1;
    for (int i = 1; i <= primeCount; ++i) {
        result *= i;
    }

    for (int i = 1; i <= (n - primeCount); ++i) {
        result *= i;
    }

    return result;
}
