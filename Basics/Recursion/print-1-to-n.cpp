vector<int> printNos(int x) {
    if (x == 0) return {};
    vector<int> res = printNos(x-1);
    res.push_back(x);
    return res;
}
