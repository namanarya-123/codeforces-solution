#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin >> n ;

        string s;
        cin >> s;

       int count =0;
       bool found = false;

       for(int i=0; i<n; i++)
       {
         if(s[i] == '.')
         {
            count++;
            if(count==3)
            {
            cout<<"2"<<"\n";
              found = true;
          break;
            }
         }
         else{
            count=0;
         }
       }

        if(!found)
        {
       int dot=0;
       for(int i=0; i<n; i++)
       {
         if(s[i] == '.')
         {
            dot++;
         }
       }

       cout<<dot<<"\n";
    }
}
    return 0;
}