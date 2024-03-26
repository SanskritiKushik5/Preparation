#include<vector>
// can be solved using hash map - brute force
int getSingleElement(vector<int> &arr) {
	for(int i=0; i<arr.size()-1; i=i+2){
		if(arr[i]!=arr[i+1]) return arr[i];
	}
	return arr[arr.size()-1];
}
// another simplest xor soln
int getSingleElement(vector<int> &arr) {
	int xorr = 0;
	for(int i=0; i<arr.size(); i++){
		xorr = xorr ^ arr[i];
	}
	return xorr;
}
