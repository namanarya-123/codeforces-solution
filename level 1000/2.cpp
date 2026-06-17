#include <bits/stdc++.h>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {

        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        bool ok = true;

        for(int start = 0; start < k; start++) {

            int cnt = 0;

            for(int i = start; i < n; i += k) {
                if(s[i] == '1') {
                    cnt++;
                }
            }

            if(cnt % 2) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}