void nBinaryTriangle(int n) {
    for (int i=1; i<=n; i++){
        int num = i % 2;
        for(int j=0; j<i; j++){
            cout << num << " ";
            num = (num == 0) ? 1 : 0;
        }
        cout << endl;
    }
}
