// #include <bits/stdc++.h>
// using namespace std;

// int main(){

//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
   
//     int t;
//     cin>>t;

//     while(t--)
//     {
//         int n;
//         cin>>n;

//         vector<int>arr(n);
//         int sum =0;
//         for(int i=0; i<n; i++)
//         {
//             cin>>arr[i];
//             sum+=arr[i];
//         }

//        int cm = 0;
//        int cp = 0;

//        for(int i=0 ; i<n ; i++)
//        {
//           if(arr[i] == -1)
//           cm++;
          
//           if(arr[i] == 1)
//           cp++;

//        }

//        int op =0;

//        while(true)
//        {
//           if(cm ==0 && cp>=0)
//           {
//             cout<<op<<endl;
//             break;
//           }

//           if(cm%2==0 && cp>=cm)
//           {
//             cout<<op<<endl;
//             break;
//           }

//           op++;
//           cm--;
//           cp++;

//        }
//     }

//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
   
    while(true)
    {
        int x;
        cin>>x;

        if(x==0)
        {
            cout<<"hurray"<<endl;
        break;

        cout<<x<<endl;
        }

    }
    return 0;
}