#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    // cin.tie(NULL);
   
        int n;
        cin>>n;

        string s;
        cin>>s;

        string temp = s;
        sort(temp.begin(), temp.end());

       
            int i = 0;
            int j = 0;

            while(i<n && j<n)
            {
                if(s[i] == temp[j])
                {
                    if(i != j)
                    break;

                  i++;
                  j++;
                }else{
                    i++;
                }
            }

            if(i == j)
            {
                cout<<"NO"<<endl;
            }else{

            cout<<"YES"<<endl;
            cout<<j+1<< " " <<i+1<<endl;
            }
        

    return 0;

}
