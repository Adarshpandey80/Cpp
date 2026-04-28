#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& arr, int target){
    unordered_map<int,int> mp;

    for(int i = 0; i < arr.size(); i++){
        int need = target - arr[i];

        if(mp.find(need) != mp.end()){
            return {mp[need], i};
        }

        mp[arr[i]] = i;
    }
    return {};
}


// #include<iostream>
// using namespace std;
// class Rect{
//     private:
//     int l;
//     int b;
//     public:
//     void getdata(){
//         cout<<"\n enter the length and bredth of rectangel :";
//         cin>>l>>b;
//     }
//     void showdata(){
//         cout<<"\n length is : "<<l;
//         cout<<"\n bredth is : "<<b;
//     }
//     void getarea(){  
//         cout<<"\n the area of rectangel is : "<<(l*b);
//     }
//     void getpira(){  
//         cout<<"\n the pairameter of rectangel is : "<<2*(l+b);
//     }
// };

// int main(){
//     Rect r1;
//     r1.getdata();    
//     r1.showdata();
//     r1.getarea();
//     r1.getpira();
//     return 0;
// }


Node* reverseLL(Node* head){
    Node* prev = NULL;
    Node* curr = head;

    while(curr != NULL){
        Node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

int maxSubArray(vector<int>& arr){
    int sum = 0, maxi = INT_MIN;

    for(int i = 0; i < arr.size(); i++){
        sum += arr[i];
        maxi = max(maxi, sum);

        if(sum < 0) sum = 0;
    }
    return maxi;
}


int binarySearch(vector<int>& arr, int target){
    int low = 0, high = arr.size()-1;

    while(low <= high){
        int mid = (low + high)/2;

        if(arr[mid] == target) return mid;
        else if(arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}


int countSubarrays(vector<int>& arr, int k){
    unordered_map<int,int> mp;
    int sum = 0, count = 0;

    mp[0] = 1;

    for(int i = 0; i < arr.size(); i++){
        sum += arr[i];

        if(mp.find(sum - k) != mp.end()){
            count += mp[sum - k];
        }

        mp[sum]++;
    }
    return count;
}


int longestDistinct(vector<int>& arr){
    unordered_set<int> st;
    int left = 0, maxLen = 0;

    for(int right = 0; right < arr.size(); right++){
        while(st.count(arr[right])){
            st.erase(arr[left]);
            left++;
        }
        st.insert(arr[right]);
        maxLen = max(maxLen, right - left + 1);
    }
    return maxLen;
}