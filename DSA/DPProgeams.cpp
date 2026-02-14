//Buy Sell Stocks

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {7,1,3,6,4,5};
      int mini = arr[0];   
    int maxSell = arr[0];    
    for(int i=1 ;i<arr.size();i++){
        
        mini = min(mini, arr[i]); 
        maxSell = max(maxSell , arr[i]);
    }
    cout<<"maxprofit"<<(maxSell - mini)<<endl;

}