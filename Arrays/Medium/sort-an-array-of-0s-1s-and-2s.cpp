// Brute force - any sorting algo
// Better - counting separately in a loop and changing the array
// Optimal - Dutch National Flag Algo
// 4 sectors in this - 0--low-1->0, low--mid-1->1, high+1--n-1->2, rest is random (mid-high) 
#include <bits/stdc++.h> 
void sortArray(vector<int>& arr, int n)
{
    int low = 0;
    int mid = 0;
    int high = n-1;
    while(mid<=high){
        if(arr[mid] == 0) {
            swap(arr[mid], arr[low]);
            low++;
            mid++;
        } else if (arr[mid] == 1){
            mid++;
        } else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}
