// #include<iostream>
// using namespace std;
// int main(){
//     int n  ,f1= 0, f2=1 , sum = 0;
//     cout<<"enter the num"<<endl;
//     cin>>n;
//     cout<< f1<<f2<<endl;
//    for(int i=3 ;i<=n;i++){
//         sum = f1 + f2;
//         f1=f2;
//         f2=sum;
//         i++;
//         }
//     }

// ==============using recursion fibonachi================
//  #include<iostream>
// using namespace std;
// int fibo(int n){
//     if(n<=1){
//         return n;
//     }else{
//         return fibo(n-1)+fibo(n-2);
//     }
// }
// int main(){
//     int t;
//     cout<<"inter the value of n"<<endl;
//     cin>>t;
//      for(int i=0 ;i<=t;i++){
//         cout<<fibo(i)<<endl;
//         }

// }
#include <iostream>
using namespace std;

void print(){
   static int count = 0;
    if(count==5){
        return;
    }
    cout<<count<<endl;
    count++;
    print();

}

void print2(int n , int i){
    if(i==n){
        return;
    }
    cout<<i<<endl;
    print2(n, i+1);
}

void print3( int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    print3(n-1);
}

void print4(int n){
    if(n==0){
        return;
    }
    cout<<"Adarsh"<<endl;
    print4(n-1);
}

void sum(int n ){
    static int  total = 0; 
   if(n==0){
      cout<<total<<endl;
      return;
   }
   total += n;
   sum(n-1);
}
   
int  fact(int n){
    if(n==0) return 1;
        return n * fact(n-1);
 }  
 
// reverse an array using recursion
// method 1
 void fun(int l,int r ,int arr[]){
    if(l>=r) return;
    swap(arr[l] , arr[r]);
    fun(l+1 , r-1 , arr) ;
 }
// method 2
 void fun2(int i , int n , int arr[]){
    if(i>=n/2) return;
    swap(arr[i] , arr[n-i-1]);
    fun2(i+1 , n, arr);
 }

 bool  pali(string s , int i ,int l){
    if(i>=s.size()/2) return true;
    if(s[i] != s[l-i-1])  return false ;
    return pali(s,i+1 , l-1);
}
 
int fibo(int n){
    if(n<=1) return n;
    return fibo(n-1) + fibo(n-2);
}

 int main(){
    // print();
    // int n;
    // cout<<"enter the value of n"<<endl;
    // cin>>n;
    // print2(n,1);
    // int n;
    // cout<<"enter the value of n"<<endl;
    // cin>>n;
    // print3(n);
    // print4(n);
    // sum(n );
//    cout<< fact(n);
// int arr[] = {1,2,3,4,5};
// int n = sizeof(arr)/sizeof(arr[0]);
// fun(0 , n-1 , arr);
// fun2(0 , n , arr);
// for(int i =0 ; i<n ; i++){
//     cout<<arr[i]<<" ";
// }

// string s = "madam";
// int l = s.size();
// cout<<pali(s,0, l); 

cout<<fibo(4);
} 
