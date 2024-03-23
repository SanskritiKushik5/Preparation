/*
	The function is called with the parameters:
	quickSort(input, 0, size - 1);

*/

int partitionArray(int arr[], int low, int high) {
	int pivot = arr[low];
	int i=low;
	int j=high;
	while(i<j){
		while(arr[i]<=pivot && i<high){
			i++;
		}
		while(arr[j]>pivot && j>low){
			j--;
		}
		if(i<j){
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[low], arr[j]);
    return j;
}

void quickSort(int arr[], int low, int high) {
	if(low<high){
		int partition = partitionArray(arr, low, high);
		quickSort(arr, low, partition-1);
		quickSort(arr, partition+1, high);
	}
}
