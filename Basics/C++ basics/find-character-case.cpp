#include<iostream>
using namespace std;

int main() {
	// Write your code here
	char alpha;
	cin >> alpha;
	if(alpha >= 65 && alpha <= 90)        // To check upper case
		cout << 1;
	else if(alpha >= 97 && alpha <= 122)  // To check lower case
		cout << 0;
	else
		cout << -1;
	return 0;
}
