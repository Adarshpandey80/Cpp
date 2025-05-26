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
 #include<iostream>
using namespace std;
int fibo(int n){
    if(n<=1){
        return n;
    }else{
        return fibo(n-1)+fibo(n-2);
    }
}
int main(){
    int t;
    cout<<"inter the value of n"<<endl;
    cin>>t;
     for(int i=0 ;i<=t;i++){
        cout<<fibo(i)<<endl;
        }

}