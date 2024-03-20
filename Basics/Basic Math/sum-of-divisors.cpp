int sumOfAllDivisors(int n){
	int sum = 0;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=sqrt(i); j++){
			if(i%j==0) {
				sum += j;
				if(i/j != j)
					sum = sum + (i/j);
			}
		}
	}
	return sum;	
}
