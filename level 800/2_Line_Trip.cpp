#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;

    while(t--){
        int n, x;
        cin >> n >> x;
        vector<int>arr(n);

        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
    

        int md = INT_MIN;

        for(int i=1; i<arr.size(); i++)
        {
            md = max(arr[i]- arr[i-1], md);
 
        }

        md= max(md, arr[0]-0);
        md = max(md, 2*(x-arr[n-1]));

        cout << md << "\n";

        
    }

       return 0;
    

}