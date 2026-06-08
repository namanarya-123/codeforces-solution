#include <bits/stdc++.h>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n, x;
        cin>>n>>x;
        vector<int>arr(n);

        for(int i=0; i<n; i++)
        cin>>arr[i];

        int op = 0;

        int r1 = arr[0] - x;
        int r2 = arr[0] + x;

        for(int i=1 ; i<n; i++)
        {

            int l = arr[i] - x;
    int r = arr[i] + x;

    if(max(r1, l) <= min(r2, r))
    {
        r1 = max(r1, l);
        r2 = min(r2, r);
    }
    else
    {
        op++;
        r1 = l;
        r2 = r;
    }
            

        } 

        cout<<op<<endl;

    }

    return 0;
}