#include <bits/stdc++.h>
int majorityElement(vector<int> v) {
	unordered_map<int, int> mpp;
	for(int i=0; i<v.size(); i++)
		mpp[v[i]]++;
	int maxi = 0;
	int n = v.size();
	int res;
	for(auto x:mpp){
		if(x.second>n/2){
			return x.first;
		}
	}
}
int majorityElement(vector<int> v) { // {1,1,1,1,2,2,2,3}
	sort(v.begin(), v.end());
	int count = 1;
	int n = v.size();
	if(n==1) return v[0];
	for(int i=1; i<v.size(); i++){
		if(v[i]==v[i-1]){
			count++;
		} else {
			if(count>n/2){
				return v[i-1];
			}else
				count = 1;
		}
	}
	return v[n-1];
}
