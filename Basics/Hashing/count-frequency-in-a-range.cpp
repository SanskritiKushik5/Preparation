vector<int> countFrequency(int n, int x, vector<int> &nums){
    int hash[x+1] = {0};
    vector<int> ans;
    for(int i=0; i<n; i++){
        hash[nums[i]]++;
    }
    for(int i=1; i<=n; i++){
        ans.push_back(hash[i]);
    }
    
    return ans;
}

vector<int> countFrequency(int n, int x, vector<int> &nums){
    int hash[x+1] = {0};
    vector<int> ans(x);
    for(int i=0; i<n; i++){
        ans[nums[i]-1]++;
    }
    ans.resize(n);
    return ans;
}
