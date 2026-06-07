#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    const int N = 30000;

    vector<bool> prime(N + 1, true);
    prime[0] = prime[1] = false;

    for(int i = 2; i * i <= N; i++) {
        if(prime[i]) {
            for(int j = i * i; j <= N; j += i) {
                prime[j] = false;
            }
        }
    }

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        long long ans = 1;

        if(n == 1) {
            cout << 6 << '\n';
            continue;
        }

        int prev = 1;
        int req = 2;
        int i = 2;

        while(req) {
            if(!prime[i]) {
                i++;
            }
            else {
                if(i - prev < n) {
                    i++;
                    continue;
                }
                else {
                    ans *= i;
                    prev = i;
                    req--;
                    i++;
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}