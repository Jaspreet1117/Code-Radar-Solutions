int isPrime(int num) {
    if (num <= 1) 
        return 0; // Not prime
    for (int i = 2; i<=num-2; i++) {
        if (n % i == 0) 
            return 0;
    }
    return 1; 
}