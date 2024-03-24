// brute force -> sort and give ans O(nlogn)
// better -> loop for largest, loop again for second-largest O(2n)
// optimal -> find both in single loop O(n)
int find_slargest(vector<int> arr, int n){
    int largest = arr[0];
    int slargest = INT_MIN;
    for(int i=1; i<n; i++){
        if(arr[i]>largest){
            slargest = largest;
            largest = arr[i];
        } else if (arr[i]>slargest){
            slargest = arr[i];
        }
    }
    return slargest;
}
int find_ssmallest(vector<int> arr, int n){
    int smallest = arr[0];
    int ssmallest = INT_MAX;
    for(int i=1; i<n; i++){
        if(arr[i]<smallest){
            ssmallest = smallest;
            smallest = arr[i];
        } else if (arr[i]<ssmallest){
            ssmallest = arr[i];
        }
    }
    return ssmallest;
}
vector<int> getSecondOrderElements(int n, vector<int> arr) {
    int slargest = find_slargest(arr, n);
    int ssmallest = find_ssmallest(arr, n);
    return {slargest, ssmallest};
}
