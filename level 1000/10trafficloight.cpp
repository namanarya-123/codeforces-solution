#include <bits/stdc++.h>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {

        int n;
        char c;
        cin>>n>>c;

        string s;
        cin>>s;

        string temp = s+s;
        int idx = INT_MAX;
        int ans = 0;

        for(int i= 2*n-1; i>=0 ; i--)
        {
            if(temp[i] == 'g')
            {
                idx = min(idx, i);
            }
            if(temp[i] == c )
            {
                if(idx != INT_MAX)
                ans = max(ans, idx- i);

            }
        }

        cout<<ans<<endl;

    }

    return 0;
}