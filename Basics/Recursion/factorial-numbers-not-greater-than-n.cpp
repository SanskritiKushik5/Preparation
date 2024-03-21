int factorial (int n) {
    if(n == 1) return 1;
    return n*factorial(n-1);
}
vector<long long> factorialNumbers(long long n) {
    vector<long long> ans;
    ans.push_back(1);
    for(long long i=2; i<=n; i++){
        int fact = factorial(i);
        if(fact<=n) 
            ans.push_back(fact);
        if(fact>=n) break; // check if factorial is not greater
    }
    return ans;
}
