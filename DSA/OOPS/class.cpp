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

// #include <iostream>
// using namespace std;
// class rectangel {
//  public:
//   int l;
//   int b;
//   // function declaration
//   void getdata();
//   void showdata();
//   void area();
//    void pira();
// };
// // define the function outside the class
//  void  rectangel::getdata(){
//     cout<<"enter the lingth and b "<<endl;
//     cin>>l>>b;
//   }
//   void  rectangel::showdata(){
//       cout<<"\n l is"<<l;
//       cout<<"\n b is"<<b;
//     }
//   void  rectangel::area(){
//       cout<<"\n area is"<<(l*b);
//     }
//     void  rectangel::pira(){
//       cout<<"\n pira is"<<2*(l+b);
//     }

// int main(){
//   rectangel obj;
//   obj.getdata();
//   obj.showdata();
//   obj.area();
//   obj.pira();
//   return 0;
// }



//  ==========================30/05/25 (constructor)=================================

// Example of default constructor
//  #include <iostream>
// using namespace std;
// class point{
//   public:
//   int x;
//   int y;
// public:
// point(){
//   x = 10;
//   y = 20;
//   cout<<"\n default constructor called";
// }
// void showDate(){
//   cout<<"\n X is "<<x;
//   cout<<"\n Y is "<<y;
// }
// };

// int main(){
//   point obj1;
//   point obj2;
//   point obj3;
//   obj1.x=40;
//   obj2.y=50;
//   obj1.showDate();
//   obj2.showDate();
//   obj3.showDate();
// }

// Example of parameterized constructor

// #include <iostream>
// using namespace std;
// class point{
//   public:
//   int x;
//   int y;
// public:
// point( int a, int b){
//   x = a;
//   y = b;
//   cout<<"\n parametrise constructor called";
// }
// void showDate(){
//   cout<<"\n X is "<<x;
//   cout<<"\n Y is "<<y;
// }
// };

// int main(){
//   point obj1(30, 40); // parameterized constructor called
//   point obj2(22,44); // parameterized constructor called
//   point obj3(44,55);
//   cout<<"\n obj1 value";
//   obj1.showDate();
//    cout<<"\n obj2 value";
//   obj2.showDate();
//    cout<<"\n obj3 value";
//   obj3.showDate();
// }

//  ==========================31/05/25 (constructor)=================================


// parametrise constructor

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
//   student (){
//     cout<<"\n this is a default constructor";
//   }
//   student ( string a , string b , char c , int v1,int v2,int v3,int v4,int v5){
//    name = a;
//    enroll = b;
//    sec = c;
//    p=v1;
//    c=v2;
//    m=v3;
//    h=v4;
//    e=v5;
//    cout<<"\n this is parametrise constructor called";

//   }
//   ~student(){
//     cout<<"\n this is destructor called";
//   }


// };

// int main(){
//   student obj ;
//   student obj1("adarsh","12sc",'a', 23,44,55,66,77);
//   return 0;
// }

//  ========================== (Encapsulation)=================================
// getter 
// setter
// getName()// use to take data from user
// setName()// use to edit data or show method 


#include <iostream>
using namespace std;

class student {
string name;
string enroll;
char sec;
int p;
int c;
int m;
int h;
int e;

public:
  string getName(){
    return name;
  }
  string getEnroll(){
    return enroll;
  }
  char getSec(){
    return sec;
  }
  int getP(){
    return p;
  }
  int getC(){
    return c;
  }
  int getM(){
    return m;
  }
  int getH(){
    return h;
  }
  int getE(){
    return e;
  }

  void setName( string name){
    this->name = name;
  }
  void setEnroll(string enroll){
    this->enroll =  enroll;
  }
  void setSec(char sec){
    this->sec=sec;
  }
  void setP(int p){
    this->p=p;
  }
  void setC(int c){
    this->c=c;
  }
  void setM(int m){
    this->m=m;
  }
  void setH(int h){
    this->h=h;
  }
  void setE(int e){
    this->e=e;
  }

};

int main(){
student s;
s.setName("adarsh");
s.setEnroll("CS124");
s.setSec('A');
s.setP(11);
s.setC(22);
s.setM(33);
s.setH(44);
s.setE(55);

cout<<"\n Nme:"<<s.getName();
cout<<"\n Enroll:"<<s.getEnroll();
cout<<"\n Sec:"<<s.getSec();
cout<<"\n P:"<<s.getP();
cout<<"\n C:"<<s.getC();
cout<<"\n M:"<<s.getM();
cout<<"\n H:"<<s.getH();
cout<<"\n E:"<<s.getE();

  return 0;
}