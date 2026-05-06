#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    // cin.tie(NULL);
    int t;
    cin>>t;

    while(t--){
        int n;
       cin>>n;

       string s;
       cin>>s;

  
       int lb=0;
        int i=0; 
        int j=0;

        while(i<s.size() && j<s.size())
        {
            if(s[j]=='>')
            {
                lb=max(lb,j-i+1);
                j++;
            }else{
                j++;
                i=j;
            }
        }

   
        int rb =0;
        i=0;
        j=0;

        while(i<s.size() && j<s.size())
        {
            if(s[j]=='<')
            {
                rb=max(rb,j-i+1);
                j++;
            }else{
                j++;
                i=j;
            }
        }

        cout<<max(rb,lb)+1<<endl;


    }
    return 0;

}


