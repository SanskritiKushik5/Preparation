int check(int l, int r, string& str){
    if(l>=r) return 1;
    if(str[l]!=str[r]) return 0;
    return check(l+1, r-1, str);
}

bool isPalindrome(string& str) {
    int n = str.length();
    if (!check(0, n-1, str)) return false;
    return true;
}

bool isPalindrome(string& str, int i=0) {
    if(i>= str.length()) return true;
    if(str[i] != str[str.length()-i-1]) return false;
    return isPalindrome(str, i+1);
}
