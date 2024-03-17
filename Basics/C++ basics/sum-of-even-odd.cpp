#include<iostream>
using namespace std;

int main() {
	int n, rem, odd = 0, even = 0;
	cin >> n;
	while (n) {
		rem = n%10;
		if (rem%2 == 0) even += rem;
		else odd += rem;
		n = n/10;
	}
	cout << even << ' ' << odd;
	return 0;
}
