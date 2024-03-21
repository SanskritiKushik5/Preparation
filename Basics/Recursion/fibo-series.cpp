vector<int> generateFibonacciNumbers(int n) {
    if (n <= 0) return {};
    if (n == 1) return {0};
    if (n == 2) return {0, 1};

    vector<int> v = generateFibonacciNumbers(n - 1);  

    int last = v.back();
    int secondLast = v[v.size() - 2];
    v.push_back(last + secondLast);  

    return v;
}
