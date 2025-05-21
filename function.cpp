// #include<iostream>
// using namespace std;
// int myfun();
// int main(){
//     myfun();
//     int x = myfun();
//     cout<<x<<endl;
//     return 0;
// }

// int myfun(){
//     // cout<<"hello world"<<endl;
//     return 5 ;
// }



// #include<iostream>
// using namespace std;
// int fact(int n);

// int main(){

//     cout<<"enter the no"<<endl;
//     int x;
//     cin>>x;
//     fact(x);
// return 0;
// }

// int fact(int n){
//   int i=1,count=0;
//   while(i<n){
//     if(n%i==0){
//         count++;
//     }
//     i++;
//   }
//   if(count==2){
//     cout<<"prime no"<<endl;
//   }else{
//     cout<<"not prime"<<endl;
//   }
// }

// wap  to swap two paramenter using function

// #include<iostream>
// using namespace std;
// int func(int x, int y);
// int main(){
//     cout<<"enetr two value for swap"<<endl;
//     int x,y,z;
//     cin>>x>>y;
//     z = x;
//     x=y;
//     y=z;
//      func(x,y);
//     return 0;
// }
// int func(int x, int y){
//     cout<<"after swap x is "<<x<<endl;
//     cout<<"after swap y is "<<y<<endl;
// }
// 

// function overriding


// #include<iostream>
// using namespace std;
// void fun1(){
//     cout<<"hello world"<<endl;
// }
// void fun1(int x){
//     cout<<"fun 2"<<x<<endl;
// }
// int main (){
//  fun1(10);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int hello(int n){
//     if(n==0){
//         return 0;
//     }
//     cout<<"hello world"<<endl;
//     hello(n-1);
// }

// int main(){
//     hello(5);
// }

// prime 


// #include<iostream>
// using namespace std;
// int hello(int n){
//     if(n==0){
//         return 0;
//     }
   
//     int sum = n + hello(n-1);
//    return sum;

// }

// int main(){
//  cout<<hello(5);
// }

// #include<iostream>
// using namespace std;
// int hello(int n ,int f1=0, int f2=1){
//     if(n==0){
//         return 0;
//     }
   
//     int sum=0 ,f1=0,f2=1;
//     return f1;
//    sum = f1+f2;
//    f1 = f2;
//    f2 = sum;
  
//   hello(n-1);
// }

// int main(){
// hello(5);

// }

#include <iostream>
using namespace std;

// Function to count trailing zeros in n!
int countTrailingZerosInFactorial(int n) {
    int count = 0;
    
    // Keep dividing n by powers of 5 and update count
    for (int i = 5; n / i >= 1; i *= 5) {
        count += n / i;
    }
    
    return count;
}

int main() {
    int number = 720;
    int zeros = countTrailingZerosInFactorial(number);
    
    cout << "Number of trailing zeros in " << number << "! is: " << zeros <<endl;
    
    return 0;
}