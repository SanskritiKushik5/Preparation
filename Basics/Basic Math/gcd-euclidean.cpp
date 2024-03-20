int gcd(int a,int b)
{
	int min_num = min(a,b), res = 0;
	for(int i=min_num; i>1; i--) {
		if(a%i == 0 && b%i == 0) {
			res = i;
			break;
		}
	}
	if (res == 0) return 1;
	else return res;
}

// Euclidean's Theorem O(log(min(a, b)))
// gcd(a, b) = gcd(b, a%b) where a>b
int gcd(int a,int b)
{
	if(a==0) return b;
	if(b==0) return a;
	if(a>b) return gcd(a%b, b);
	if(a<b) return gcd(b%a, a);
}

// Improvised (to avoid swapping)
int gcd(int a,int b)
{
	while(a>0 && b>0){
		if(a>b) a %= b;
		else b %= a;
	}
	if(a==0) return b;
	if(b==0) return a;
}
