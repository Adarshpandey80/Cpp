
#include<iostream>
using namespace std;
#include<vector>
// int main(){
//     int n ;
//     cin>>n;
//   vector<int> ar(n);

//   for(int i = 0;i<n;i++){
//      cin>>ar[i];
//   }
//   for(int i = 0;i<n;i++){
//     cout<<ar[i]<<" ";
//   }
// }

// int main(){
//     int n ;
//     cin>>n;
//     int arr[n];
//     for(int i = 0;i<n;i++){
//         cin>>arr[i];
//     } 
// }

// string array

// int main(){ // single char
//     string ch;
//     cin>>ch;
//     cout<<ch;

// }

// int main(){ // multipe char(string)
//     string s ;
//    getline(cin , s);
//    cout<<s;
// }

// int main(){ // string using array
//     int n;
//     cin>>n;
//     vector<string> st(n);
//     for(int i=0;i<n;i++){
//         cin>>st[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<st[i]<<" ";
//     }
// }

// 2d vector

// int main(){
//     int n,m;
//     cin>>n>>m;
//     vector<vector<int>> arr(n , vector<int>(m));
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>arr[i][j];
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<arr[i][j]<<" ";
//         }
//     }
// }

// int main(){
//     int n ;
//     cin>>n;
//     vector<string> st(n);

//     cin.ignore();

//     for(int i=0;i<n;i++){
//         getline(cin, st[i]);
//     }

//     for(auto s : st){
//         cout<<s<< " ";
//     }
// }


#include <sstream>
int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);

    vector<int> v;

    int x;

    while(ss >> x)
    {
        v.push_back(x);
    }
    for(auto el : v){
        cout<<el<<" ";
    }
}