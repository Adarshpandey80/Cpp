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

// #include<iostream>
// using namespace std;
// int main() {
//     int *ptr = new int[10];  // dynamically allocate memory for an array of 10 integers

//     // Input elements using pointer arithmetic without modifying the original pointer
//     for(int i = 0; i < 10; i++) {
//         cout << "Enter value for index " << i << ": ";
//         cin >> *(ptr + i);
//     }

//     cout << "\nElements are: ";
//     // Output elements using pointer arithmetic without modifying the original pointer
//     for(int i = 0; i < 10; i++) {
//         cout << *(ptr + i) << " ";
//     }
//     cout << endl;

//     delete[] ptr;  // correctly free the dynamically allocated array memory

//     return 0;
// }


// ===========================================14/06/26(pointer in class)==========================

// clss with pointer 

// #include<iostream>
// using namespace std;

// class Rect{
 
//     public:
//     int l;
//     int b;
//     void getdata(){
//         cout<<"\n enter length : ";
//         cin>>l;
//         cout<<"\n enter breath : ";
//         cin>>b;
//     }
//     void showdata(){
//         cout<<"\n length is :"<<l;
//         cout<<"\n breath is :"<<b;
//     }
//     void getaria(){
//         cout<<"\n the area of rectangle is : " <<(l*b);
//     }
//     void getpira(){
//         cout<<"\n the pairameter of rectangel is :"<<2*(l+b);
//     }

// };

// int main(){
//     Rect *ptr;
//     Rect obj;
//     ptr = &obj;
//     ptr->getdata();
//     ptr->showdata();
//     ptr->getaria();
//     ptr->getpira();
//     return 0;
// }


// ===========================================(virtual function)==========================

#include<iostream>
using namespace std ;
class Base {

    public:
   virtual  void show(){
        cout<<"\n this is parent class show mwthod";
    }

};

class derived1:public Base{
   
    public:
    void show(){
        cout<<"\n this is derived1 class method";

    }
};
class derived2:public Base{
   
    public:
    void show(){
        cout<<"\n this is derived2 class method";

    }
};

int main(){
    Base *ptr;
    derived1 d1;
    ptr = &d1;
    ptr->show();
    derived2 d2;
    ptr = &d2;
    ptr ->show();
    return 0;
   
}