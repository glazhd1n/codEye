#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n][n];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        int mx = a[i][0];
        for(int j = 1; j < n; j++) {
            if(mx < a[i][j]) {
                mx = a[i][j];
            }
        }
        cout << mx << '\n';
    }
}