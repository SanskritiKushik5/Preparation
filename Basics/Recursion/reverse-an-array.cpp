vector<int> rev(int l, int r, vector<int> v) {
    if(l>=r) return v;
    swap(v[l], v[r]);
    return rev(l+1, r-1, v);
}

vector<int> reverseArray(int n, vector<int> &nums)
{
    return rev(0, n-1, nums);
}
