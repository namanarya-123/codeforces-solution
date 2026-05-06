#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    // cin.tie(NULL);
    int t;
    cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;

        string s;
        cin>>s;

        vector<int>arr(26, 0);

        for(int i=0; i<n; i++)
        {
            arr[s[i]-'a']++;
        }

        int c1=0;

        for(int i=0; i<26; i++)
        {
            if(arr[i]%2==1)
            {
                c1++;
            }
        }

        int no = c1-k;

        if(no>1)
        {
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }


    }
    return 0;

}