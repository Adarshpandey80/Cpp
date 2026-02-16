
// #include<iostream>
// #include<vector>

// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//    vector<int>  arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     //precomputing 
//     int hash[13]= {0};
//     for(int i=0;i<n;i++){
//         hash[arr[i]]++;
//     }

//     int q;
//     cin>>q;
//     while(q--){
//         int number;
//         cin>>number;
//         //fecth the count of number 
//         cout<<hash[number]<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//      string s;
//     cin>>s;
//     //precompute
//     int hash[256] ={0};
//     for(int i=0;i<s.size();i++){
//         hash[s[i]]++;
    
//     }
//     int q;
//     cin>>q;
//     while(q--){
//         char ch;
//         cin>>ch;
//         cout<<hash[ch]<<endl;
//     }

// }

//using map if array size is so big and we do not know the range of number 

// #include<iostream>
// #include<map>
// #include <vector>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//    vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     // precomputing
//     map<int , int> mpp;
//     for(int i=0;i<n;i++){
//         mpp[arr[i]]++;
//     }
//     //irerator to print the map
//     for(auto it : mpp){
//         cout<<it.first<<" "<<it.second<<endl;
//     }
//     int q; 
//     cin>>q;
//     while(q--){
//         int num;
//         cin>>num;
//         cout<<mpp[num]<<endl;
//     }
// } 

#include<iostream>
using namespace std;
#include <vector>
#include <algorithm>
int main(){
    string s;
    cin>>s;
   string ans = "";
    int hash[26] = {0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++; 
    }

    for(char c : s){
        int freq = hash[c - 'a'];

        if(freq % 2 == 0){  // even → +3
            ans += char((c - 'a' + 3) % 26 + 'a');
        } else {            // odd → -3
            ans += char((c - 'a' - 3 + 26) % 26 + 'a');
        }
    }

    cout << ans;
}