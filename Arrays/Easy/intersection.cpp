#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &a, int n, vector<int> &b, int m)
{
	int i=0, j=0;
	vector<int> res = {};
	while(i<n && j<m){
		if(a[i]>b[j]){
			j++;
		}else if(a[i]<b[j]){
            i++;
        } else {
			res.push_back(a[i]);
			i++; 
			j++;
		}
	}
	return res;
}
