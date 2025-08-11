///. decimal to binary conversion

#include<iostream>
using namespace std ;
int detobi(int num){

    int ans =0, pow=1;
    while(num>0){
        int res= num%2;
        ans += res*pow;
        pow *=10;
        num/=2;
    }
    return ans;
}
int bitode (int num){
    int ans= 0,pow=1;
    while(num>0){
     int rem = num%2;
     ans += rem*pow;
     num/=10;
     pow *=2;
    }
    return ans;
}

int main(){
    // cout<<detobi(5)<<endl;
    cout<<bitode(101)<<endl;
}

