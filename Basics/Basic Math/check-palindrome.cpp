#include <string>

bool palindrome(int n)
{
    string str = to_string(n);
    int len = str.length();
    int j = len-1;
    for(int i=0; i<len; i++) {
        if(str[i]!=str[j]) {
            return false;
        }
        j--;
    }
    return true;
}

bool palindrome(int n)
{
    int num = n;
    int rem = 0, rev = 0;
    while(n) {
        rem = n%10;
        rev = (rev*10) + rem;
        n = n/10;
    }
    if(rev == num) return true;
    else return false;
}
