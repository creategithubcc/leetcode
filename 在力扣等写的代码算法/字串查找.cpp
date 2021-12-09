#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    string A, B;
    cin >> A;
    cin >> B;
    int lena = A.size(), lenb = B.size(), ans = 0;

    for (int i = 0, j = 0; i <= lena; i++) {
        if (j == lenb) {
            ans++;
            i = i - j;
            j = 0;
            continue;
        }

        if (A[i] == B[j]) {
            j++;
        } else {
            i = i - j;
            j = 0;
        }
    }

    cout << ans << endl;
}
