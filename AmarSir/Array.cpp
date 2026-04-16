#include <iostream>
#include <algorithm>
using namespace std;

class Array
{
public:
    void InputArray(int n)
    {
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cout << "Enter the " << i + 1 << " element of array: ";
            cin >> arr[i];
        }
        bool an = true;
        while (an)
        {
            string ans;
            cout << "Traverse (t) Exit (e)  deletion (d)  sesrching (s) :  " ;
   
            cin >> ans;
            if (ans == "t")
            {
                for (int i = 0; i < n; i++)
                {
                    cout << i + 1 << " element is: " << arr[i] << endl;
                }
            }
          else if (ans == "d") {
                int del;
                cout << "Enter value to delete: ";
                cin >> del;

                bool found = false;

                for (int i = 0; i < n; i++) {
                    if (arr[i] == del) {
                        for (int j = i; j < n - 1; j++) {
                            arr[j] = arr[j + 1];
                        }
                         cout<<"element deleted : " <<endl;
                        n--;
                        found = true;
                        break;
                    }
                }

                if (!found) cout << "Element not found\n";
            }
            else if (ans == "e")
            {
                an = false;
                break;
            } 
           
          else if(ans == "s"){
    string op;
    cout<<"linearSearch (l) or binarySearch (b): ";
    cin>>op;

    if(op == "l"){
        int ele;
        cout<<"Enter element: ";
        cin>>ele;

        bool found = false;

        for(int i = 0; i < n; i++){
            if(arr[i] == ele){
                cout<<"Element found at index: "<<i<<endl;
                found = true;
                break;
            }
        }

        if(!found) cout<<"Element not found"<<endl;
    }

    else if(op == "b"){
        sort(arr, arr + n);  // important

        int elt;
        cout<<"Enter element: ";
        cin>>elt;

        int low = 0, high = n-1;
        bool found = false;

        while(low <= high){
            int mid = (low + high)/2;

            if(arr[mid] == elt){
                cout<<"Element found at index: "<<mid<<endl;
                found = true;
                break;
            }
            else if(arr[mid] < elt){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }

        if(!found) cout<<"Element not found"<<endl;
    }
                }
            
            else
            {
                cout << "Please press only (t) or (e) or (d) or (s)" << endl;
            }
        }
    }

};

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    Array obj;
    obj.InputArray(n);
}