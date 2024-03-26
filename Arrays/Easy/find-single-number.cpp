#include<vector>
// can be solved using hash map - brute force
int getSingleElement(vector<int> &arr) {
	for(int i=0; i<arr.size()-1; i=i+2){
		if(arr[i]!=arr[i+1]) return arr[i];
	}
	return arr[arr.size()-1];
}
