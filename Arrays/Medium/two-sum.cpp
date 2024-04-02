#include <bits/stdc++.h>
// best for returning index
string read(int n, vector<int> book, int target)
{
    map<int, int> mpp;
    for(int i=0; i<n; i++){
        int a = book[i];
        int more = target - a;
        if(mpp.find(more)!=mpp.end()){
            return "YES";
        }
        mpp[a] = i;
    }
    return "NO";
}
// best for returning yes or no
string read(int n, vector<int> book, int target)
{
    int i = 0, j = n-1;
    sort(book.begin(), book.end());
    while(i<j){
        int sumi = book[i]+book[j];
        if(sumi > target)
            j--;
        else if(sumi < target)
            i++;
        else 
            return "YES";
    }
    return "NO";
}
