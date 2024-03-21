long long sumFirstN(long long n) {
    if(n==0) return 0;
    long long sum = sumFirstN(n-1);
    sum += n;
    return sum;
}

long long sumFirstN(long long n) {
    if(n==0) return 0;
    return n+sumFirstN(n-1);
}

long long sumFirstN(long long n) {
    return n*(n+1)/2;
}
