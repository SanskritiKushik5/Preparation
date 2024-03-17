#include<bits/stdc++.h>
using namespace std;

int main()
{
        int n;
        int a = 1;
        int b = 1;
        int output;
        cin >> n;
        if (n==1 || n==2){
                cout << 1;
                return 0;
        }
        for(int i=3; i<=n; i++) {
                output = a+b;
                a = b;
                b = output;
        }
        cout << output;
        return 0;
}
/*
Other approaches - recursive call, DP
*/
