vector<int> getFrequencies(vector<int>& v) {
    unordered_map<int, int> mp;
    vector<int> ans(2);
    int maxi, mini;
    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++)
        mp[v[i]]++;
    mini = INT_MAX;
    maxi = -1;
    for(auto x : mp){
        if(x.second>maxi){
            maxi = x.second;
            ans[0] = x.first;
        } else if (x.second==maxi && x.first<ans[0]){
            ans[0] = x.first;
        }
        if(x.second<mini){
            mini = x.second;
            ans[1] = x.first;
        } else if (x.second==mini && x.first<ans[1]){
            ans[1] = x.first;
        }
    }
    return ans;
}
