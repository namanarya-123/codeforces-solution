#include <bits/stdc++.h>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
       int n, k;
       cin>>n>>k;

       string s;
       cin>>s;

       int j=0;
       int b = 0;
       int w = 0;
       int ans = INT_MAX;

       for(int i=0; i<n; i++)
       {
          if(s[i] == 'B')
          b++;

          if(s[i] == 'W')
          w++;

          if(i-j+1 == k)
          {
            ans = min(ans, w);
            if(s[j] == 'B')
            {
            b--;
            }
            else
            {
            w--;
            }

            j++;
          }
       }

       cout<<ans<<endl;

    }

    return 0;
}