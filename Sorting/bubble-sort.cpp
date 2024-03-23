void bubbleSort(vector<int>& arr, int n) 
{
    for(int i=n-1; i>=0; i--){
        int count = 0;
        for(int j=0; j<i; j++){
          if (arr[j] > arr[j + 1]) {
            swap(arr[j], arr[j + 1]);
            count++;
          }
        }
        if(count==0){
            break;
        }
    }
}
