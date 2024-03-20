int countDigits(int n){
	int rem, res = 0, num = n;
	while(n){
		rem = n%10;
		if(rem!=0 && num%rem==0) ++res;
		n = n/10;
	}
	return res;
}
