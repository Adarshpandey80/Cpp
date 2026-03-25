#include <iostream>
#include <vector>
using namespace std;

// find three largest element of the array

vector<int> findthreelargest(vector<int> &arr, int n)
{
    int frsitLargest = INT_MIN;
    int SecondLargest = INT_MIN;
    int thirdLargest = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > frsitLargest)
        {
            int temp = SecondLargest;
            SecondLargest = frsitLargest;
            thirdLargest = temp;
            frsitLargest = arr[i];
        }
        else if ((arr[i] > SecondLargest) && (arr[i] != frsitLargest) && (arr[i] != thirdLargest))
        {
            SecondLargest = arr[i];
        } else if((arr[i]>thirdLargest) && (arr[i]!= frsitLargest) && (arr[i] != SecondLargest)){
            thirdLargest = arr[i];
        }
    }
    return {frsitLargest , SecondLargest, thirdLargest};
}

// find three smallest element of the array;
vector<int> findthreesmallest(vector<int> &arr, int n)
{
    int frsitSmallest = INT_MAX;
    int SecondSmallest = INT_MAX;
    int thirdSmallest = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < frsitSmallest)
        {
            int temp = SecondSmallest;
            SecondSmallest = frsitSmallest;
            thirdSmallest = temp;
            frsitSmallest = arr[i];
        }
        else if ((arr[i] < SecondSmallest) && (arr[i] != frsitSmallest) && (arr[i] != thirdSmallest))
        {
            SecondSmallest = arr[i];
        } else if((arr[i]<thirdSmallest) && (arr[i]!= frsitSmallest) && (arr[i] != SecondSmallest)){
            thirdSmallest = arr[i];
        }
    }
    return {frsitSmallest , SecondSmallest, thirdSmallest};
}

int main(){
     vector<int> arr = {4,2,5,7,1,8,9,5};
     int n = arr.size();
    //  vector<int> ans = findthreelargest(arr, n);
    //  for(auto el : ans){
    //     cout<<el<<",";
    //  }
     vector<int> ans = findthreesmallest(arr, n);
     for(auto el : ans){
        cout<<el<<",";
     }
}