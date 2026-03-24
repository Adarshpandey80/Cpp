#include <iostream>
#include <vector>
using namespace std;

vector<int> mergearray(vector<int> &arr1, vector<int> &arr2)
{
    int n1 = arr1.size();
    int n2 = arr2.size();
    vector<int> ans;
    for (int i = 0; i < n1; i++)
    {
        ans.push_back(arr1[i]);
    }
    for (int i = 0; i < n2; i++)
    {
        ans.push_back(arr2[i]);
    }
    return ans;
}
// uisng two pointer 
vector<int> mergearraytwopointer(vector<int> &arr1, vector<int> &arr2)
{
    int low1 = 0;
    int low2 = 0;
    vector<int> ans;
    int n1 = arr1.size();
    int n2 = arr2.size();
    while (low1 < n1 && low2 < n2)
    {
        if (arr1[low1] < arr2[low2])
        {
            ans.push_back(arr1[low1]);
            low1++;
        }
        else
        {
            ans.push_back(arr2[low2]);
            low2++;
        }
    }
    while (low1 < n1)
    {
        ans.push_back(arr1[low1]);
        low1++;
    }
    while (low2 < n2)
    {
        ans.push_back(arr2[low2]);
        low2++;
    }
    return ans;
}

int main()
{
    vector<int> arr1 = {2, 16, 3, 5, 4};
    vector<int> arr2 = {7, 9, 11, 6, 8,13,14};
    // vector<int> ans = mergearray(arr1, arr2);
    // for (auto el : ans)
    // {
    //     cout << el << ",";
    // }

    vector<int> ans2 = mergearraytwopointer(arr1, arr2); // using two pointer
     for (auto el : ans2)
    {
        cout << el << ",";
    }
}