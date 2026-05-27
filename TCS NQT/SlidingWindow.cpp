

#include <iostream>
#include <vector>
#include<algorithm>
#include <map>
using namespace std;

// max Subarray sum of size k

int maxSubArray(vector<int> &arr, int k){
    int l =0 ;int r=0; int maxSum = 0; int sum = 0;
    int n = arr.size();
    while(r<=k-1){
        sum = sum + arr[r];
        maxSum = sum;
        r++;
    }
        while(r<=n-1){
           sum = sum - arr[l];
           l++;
         
           sum = sum + arr[r];
             r++;
           maxSum = max(maxSum , sum);
        }

    
    return maxSum;

}


// logent subArray length <condition>

// longest Subarray with sum <= 14

int maxSubArrayLen(vector<int> &arr , int k){
    int l =0 ; int r = 0; int sum = 0; int maxLen = 0;

    int n = arr.size();

    while(r<n){
        sum = sum+ arr[r];
        if(sum>k){
            sum = sum -arr[l];
            l++;
        }
        if(sum<=k){
            maxLen = max(maxLen , r-l+1);
            r++;
        }
    }
    return maxLen;
}

// no of Subrray where ondition
//Maximum points/cards from picking k elements from left or right

int maxSum(vector<int>&arr , int k){
    int lsum = 0; int rsum = 0; int maxsum = 0;
    int n = arr.size();
    for(int i = 0;i<=k-1;i++){
        lsum = lsum + arr[i];
        maxsum = lsum;
    }
    int rightel = n-1;
    for(int i = k-1 ; i>=0;i--){
       lsum = lsum - arr[i];
       rsum = rsum + arr[rightel];
       rightel = rightel -1;
       maxsum = max(maxsum , lsum+rsum);
    }
    return maxsum;
}

// longest substring without repeting char;

int maxsuchar(string s ){
    int l = 0; int r = 0; int maxlen = 0;
    int n = s.size();
    vector <int> hash(250,-1);
    while(r<n){
        if(hash[s[r]] != -1){
            if(hash[s[r]]>= l){
                l = hash[s[r]]+1;
            }
        }
       int len = r-l+1;
        maxlen = max(len , maxlen);
        hash[s[r]] = r;
        r++;
          
    }
    return maxlen;

}

//  Longest Substring With At Most K Distinct Characters

int sublenght(string s , int k){
    int l = 0 ;int r = 0; int maxlen = 0; 
    map<char,int> mp;
    while(r<s.size()){
        mp[s[r]]++;
        if(mp.size()>k){
            mp[s[l]]--;
            if(mp[s[l]]==0){
                mp.erase(s[l]);
                l = l+1;
            }
        } if(mp.size()<=k){
            maxlen = max(maxlen , r-l+1);
        }
        r++;
    }
    return maxlen;
}

//  Longest Repeating Character Replacement

int subStringrepkel(string s ,int k){
    int l = 0;int r =0 ; int maxf = 0; int maxlen = 0;
    vector<int> hash(26,0);
    while(r<s.size()){
        hash[s[r]-'A']++;
        maxf = max(maxf , hash[s[r]-'A']);
        if((r-l+1) - maxf>k){
            hash[s[l]-'A']--;
            l = l+1;
        } if((r-l+1) - maxf<=k){
            maxlen = max(maxlen , r-l+1);
        }
        r++;
    }
    return maxlen;
}

// longest consicutive one;

int longestone(vector<int> &arr ){
    int l =0;int r = 0;int maxlen = 0;
    while(r<arr.size()){
        if(arr[r]==0){
           l = r+1;
        }
       int  len = r-l+1;
        maxlen = max(maxlen , len);
        r++;
    }
    return maxlen;
}

// longest ones including k zeros

// bruteforce

int longestoneZeros(vector<int> &arr , int k){
    int l =0 ;int r=0;int maxlen = 0 ; int zero = 0;
    while(r<arr.size()){
        if(arr[r]==0) zero++;
        while(zero>k){
            if(arr[l] == 0){
                zero--;l++;
            } 
            if(zero<k){
                int len = r-l+1;
                maxlen = max(maxlen , len);
            }
        }
        r++;
    }
    return maxlen;
}

// optimal

int longestonekZero(vector<int>& arr ,int k){
    int l = 0;int r = 0;int zeros = 0; int maxlen = 0;
    while(r<arr.size()){
        if(arr[r]==0) zeros++;
        if(zeros>k){
            if(arr[l]==0){
                zeros--;
            }
        } if(zeros<k){
            int len = r-l+1;
            maxlen = max(maxlen , len);
        }
        r++;
    }
    return maxlen;
}


int main(){
    vector<int> arr = {2,5,1,10,10};
    vector<int> arr2 = {-1,2,3,3,4,5,-1};
    vector<int> arr3 = {1,1,0,1,1};
    vector<int> arr4 = {1,1,1,0,0,0,1,1,1,1,0};
    string s = {"aaabbcd"};
    string s2 = {"AAABBCCD"};
    int k2 = 4;
    int k = 14;

    // cout<<maxSubArray(arr2,k2);
    // cout<<maxSubArrayLen(arr,k);
    // cout<<longestone(arr3);
    // cout<<longestonekZero(arr4,2);
    // cout<<sublenght(s,2);
    cout<<subStringrepkel(s2,2);
}