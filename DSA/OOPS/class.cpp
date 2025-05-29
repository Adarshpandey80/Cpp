// #include<iostream>
// using namespace std;
// class oprations {
//     public:
//     int n1; // instance variable
//     int n2;
//     void getdata(){
//         cout<<"enter the data n1 and n2"<<endl;
//         cin>>n1>>n2;
//     }
//       void showData(){
//      cout<<" \n n1 is "<<n1;
//         cout<<" \n n2 is "<<n2;
//     }
//     void add(){
//         cout<<"\naddition of two num"<<(n1+n2);
//     }
//       void sub(){
//         cout<<"\naddition of two num"<<(n1-n2);
//     }
//       void mul(){
//         cout<<"\naddition of two num"<<(n1*n2);
//     }
//       void div(){
//         cout<<"\n addition of two num"<<(n1/n2);
//     }

// };

// int main(){
//     oprations obj;
//     obj.getdata();
//     obj.showData();
//     obj.add();
//     obj.sub();
//     obj.mul();
//     obj.div();
//     return 0;
// }
// ==================================28/05/25================

// #include <iostream>
// using namespace std;
// class rectangel {
//  public:
//   int l;
//   int b;
//   void getdata(){
//     cout<<"enter the lingth and b "<<endl;
//     cin>>l>>b;
//   }

//   void showdata(){
//     cout<<"\n l is"<<l;
//     cout<<"\n b is"<<b;
//   }
//   void area(){
//     cout<<"\n area is"<<(l*b);
//   }
//    void pira(){
//     cout<<"\n pira is"<<2*(l+b);
//   }
// };

// int main(){
//   rectangel obj;
//   obj.getdata();
//   obj.showdata();
//   obj.area();
//   obj.pira();
//   return 0;
// }

// #include <iostream>
// using namespace std;

// class student {
// string name;
// string enroll;
// char sec;
// int p;
// int c;
// int m;
// int h;
// int e;
// public:

// void getInfo(){
//   cout<<"\n enter the name of student"<<endl;
//   cin>>name;
//   cout<<"\n enter the enroll of the student"<<endl;
//   cin>>enroll;
//   cout<<"\n enter the section"<<endl;
//   cin>>sec;
//   cout<<"\n enter the marks of phy"<<endl;
//   cin>>p;
//   cout<<"\n enter the marks of che"<<endl;
//   cin>>c;
//   cout<<"\n enter the marks of math"<<endl;
//   cin>>m;
//   cout<<"\n enter the marks of hindi"<<endl;
//   cin>>h;
//   cout<<"\n enter the marks of eng"<<endl;
//   cin>>e;
// }
// void showinfo(){
//   cout<<"\nname odf student:"<<name;
//   cout<<"\nenroll odf student:"<<enroll;
//   cout<<"\nsec of student:"<<c;
//   cout<<"\nphy marks of student:"<<p;
//   cout<<"\nche maarks of student:"<<c;
//   cout<<"\nmath marks of student:"<<m;
//   cout<<"\nhindi marks of student:"<<h;
//   cout<<"\neng marks of student:"<<e;
  
// }

// int total(){
//   return p+c+m+h+c;

// }

// float getper(int totalmarks){
//   return totalmarks/5.0;
// }


// };

// int main(){
//   student obj;
//   obj.getInfo();
//   obj.showinfo();
//   int t = obj.total();
//   float l = obj.getper(t);
//   cout<<t<<endl;
//   cout<<l<<endl;
// }

// ==========================29/05/25==============================

// #include <iostream>
// using namespace std;
// class Product {
// public:
// string name;
// float cp;
// float sp;

// void getdata(){
//   cout<<"\n enter the name of product";
//   cin>>name;
//   cout<<"\n enter the cost price of product";
//   cin>>cp;
//   cout<<"\n enter the selling price of product";
//   cin>>sp;
// }

// void showdata(){
//   cout<<"\n name of the product: "<<name;
//   cout<<"\n cost price of the product: "<<cp;
//   cout<<"\n selling price of the product: "<<sp;
// }
//  void profit(){
//   if ( cp<sp){
//     cout<<"\n profit";

//   }else {
//     cout<<" loss";
//   }
//  }



// };

// int main(){
//   Product obj;
//   obj.getdata();
//   obj.showdata();
//   obj.profit();
// }



// define member function out side the class

#include <iostream>
using namespace std;
class rectangel {
 public:
  int l;
  int b;
  // function declaration
  void getdata();
  void showdata();
  void area();
   void pira();
};
// define the function outside the class
 void  rectangel::getdata(){
    cout<<"enter the lingth and b "<<endl;
    cin>>l>>b;
  }
  void  rectangel::showdata(){
      cout<<"\n l is"<<l;
      cout<<"\n b is"<<b;
    }
  void  rectangel::area(){
      cout<<"\n area is"<<(l*b);
    }
    void  rectangel::pira(){
      cout<<"\n pira is"<<2*(l+b);
    }

int main(){
  rectangel obj;
  obj.getdata();
  obj.showdata();
  obj.area();
  obj.pira();
  return 0;
}