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
            cout << "If you want to traverse array press (y) or (n) press (d) for delete : ";
            cout << " For searching press (s) :";
            cin >> ans;
            if (ans == "y")
            {
                for (int i = 0; i < n; i++)
                {
                    cout << i + 1 << " element is: " << arr[i] << endl;
                }
            }
            else if (ans == "n")
            {
                an = false;
                break;
            }
            else if (ans == "d")
            {
                int del;
                cout << "Enter the Value to delete: ";
                cin >> del;
                for (int i = 0; i < n; i++)
                {
                    if (arr[i] == del)
                    {
         
                        break;
                    }
                    else
                    {
                        cout << " Element not found : ";
                    }
                }
                else if (ans == "s")
                {

                    string op;
                    cout << " Choose option for searching : " << endl;
                    cout << " Binary press (b) : " << endl;
                    cout << "Linear press (l) :" << endl;
                    if (op == "b")
                    {
                        int ele;
                        cout << " Enter the element : ";
                        cin >> ele;
                        int low = 0;
                        int high = arr.size();
                        while (low <= high)
                        {
                            int mid = (low + high) / 2;
                            if (mid == ele)
                            {
                                cout << " Element found :" << i;
                                break;
                            }
                            else if (mid < ele)
                            {
                                high = mid - 1;
                            }
                            else if (mid > ele)
                            {
                                low = mid + 1;
                            }
                        }
                        else if (ans == "l")
                        {
                             for (int i = 0; i < n; i++)
                            {
                                if (arr[i] == ele)
                                {
                                    cout << "Element found : " << i;
                                }
                            }
                        }
                    }
                }
            }
            else
            {
                cout << "Please press only (y) or (n) or press (d) for deletion" << endl;
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