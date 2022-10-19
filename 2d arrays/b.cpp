#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    // square matrix
    int a[n][n];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < n; i++) {

        
        for(int j = 0; j < n; j++) {
            cout << a[i][j] * a[i][j] << ' ';
        }
        cout << '\n';
    }
}