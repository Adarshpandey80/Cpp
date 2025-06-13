// #include<iostream>
// using namespace std;
// int main(){
//      int x =10;
//      int *p = &x; // Pointer p points to the address of x
//  cout<<"address of x is: "<<&x<<endl;
//  cout<<" address pointed by p is: "<<p<<endl;
//  cout<<" address of p is: "<<&p<<endl;
//  cout<<" value of x is: "<<x<<endl;
//  cout<<" value pointed by p is: "<<*p<<endl;

// }

#include<iostream>
using namespace std;
int main() {
    int *ptr = new int[10];  // dynamically allocate memory for an array of 10 integers

    // Input elements using pointer arithmetic without modifying the original pointer
    for(int i = 0; i < 10; i++) {
        cout << "Enter value for index " << i << ": ";
        cin >> *(ptr + i);
    }

    cout << "\nElements are: ";
    // Output elements using pointer arithmetic without modifying the original pointer
    for(int i = 0; i < 10; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;

    delete[] ptr;  // correctly free the dynamically allocated array memory

    return 0;
}
