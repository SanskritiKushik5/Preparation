bool checkArmstrong(int n){
	int sum = 0, rem = 0, num = n;
	int k = (int)(log10(n)+1);
	while (n) {
		rem = n%10;
		sum += pow(rem, k);
		n /= 10;
	}
	if (num == sum) return true;
	else return false;
}
