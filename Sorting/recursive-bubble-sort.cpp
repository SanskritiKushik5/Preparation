void bubble(vector<int>& arr, int n, int count) {
    if(n==1 || count==0) return;
    count = 0;
    for(int j=0; j<n-1; j++){
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
        count++;
      }
    }
    bubble(arr, n-1, count);
}
void bubbleSort(vector<int>& arr, int n) 
{
    bubble(arr, n, 1);
}
