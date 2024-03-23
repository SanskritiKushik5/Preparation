void insertS(int arr[], int n, int i){
    if(i==n) return;
    int j = i;
    while(j>0 && arr[j-1]>arr[j]){
        int temp = arr[j];
        arr[j] = arr[j-1];
        arr[j-1] = temp;
        j--;
    }
    insertS(arr, n, i+1);
}

void insertionSort(int arr[], int n){
    insertS(arr, n, 0);
}
