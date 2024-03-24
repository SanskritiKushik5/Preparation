#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    sort(arr.begin(), arr.end());
    return arr[n-1];
}

int largestElement(vector<int> &arr, int n) {
    int maxi = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>maxi) maxi = arr[i];
    }
    return maxi;
}
