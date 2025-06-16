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
//   string getName(){
//     return name;
//   }
//   string getEnroll(){
//     return enroll;
//   }
//   char getSec(){
//     return sec;
//   }
//   int getP(){
//     return p;
//   }
//   int getC(){
//     return c;
//   }
//   int getM(){
//     return m;
//   }
//   int getH(){
//     return h;
//   }
//   int getE(){
//     return e;
//   }

//   void setName( string name){
//     this->name = name;
//   }
//   void setEnroll(string enroll){
//     this->enroll =  enroll;
//   }
//   void setSec(char sec){
//     this->sec=sec;
//   }
//   void setP(int p){
//     this->p=p;
//   }
//   void setC(int c){
//     this->c=c;
//   }
//   void setM(int m){
//     this->m=m;
//   }
//   void setH(int h){
//     this->h=h;
//   }
//   void setE(int e){
//     this->e=e;
//   }

// };

// int main(){
// student s;
// s.setName("adarsh");
// s.setEnroll("CS124");
// s.setSec('A');
// s.setP(11);
// s.setC(22);
// s.setM(33);
// s.setH(44);
// s.setE(55);

// cout<<"\n Nme:"<<s.getName();
// cout<<"\n Enroll:"<<s.getEnroll();
// cout<<"\n Sec:"<<s.getSec();
// cout<<"\n P:"<<s.getP();
// cout<<"\n C:"<<s.getC();
// cout<<"\n M:"<<s.getM();
// cout<<"\n H:"<<s.getH();
// cout<<"\n E:"<<s.getE();

//   return 0;
// }

//  ========================== 2/06/25 (Inheritance)====================================

//single inheritance==================

// #include<iostream>
// using namespace std;
// class rgpv{
//   public:
//   string uname;
//   int ucode;

//   void getdata(){
//     cout<<"enter the university name";
//     cin>>uname;
//     cout<<"enter the univercity code";
//     cin>>ucode;
//   }
//   rgpv(){
//     cout<<"\n this is default univercity constructor called ";
//   }
//   ~rgpv(){
//     cout<<"\n this is default univercity destroctor called ";
//   }


// };

// class collage :public rgpv{
 
//   public:
//   string cname;
//   int ccode;
//   void acceptdata(){
//     getdata();
//     cout<<"\n enter the collage name : ";
//     cin>>cname;
//     cout<<"\n enter the collage code ::";
//     cin>>ccode;
//   }
//   void showdata(){
//     cout<<"\n univercity name is:"<<uname;
//     cout<<"\n univercity code is:"<<ucode;
//     cout<<"\n collage name is:"<<cname;
//     cout<<"\n collage code is :"<<ccode;
//   }

//    collage(){
//     cout<<"\n this is default collage constructor called ";
//   }
//   ~collage(){
//     cout<<"\n this is default collage destroctor called ";
//   }

// };

// int main(){
//   collage obj;
//   obj.acceptdata();
//   obj.showdata();
  
// }


//  ========================== 3/06/25 (MultiplInheritance)====================================

// #include <iostream>
// using namespace std;

// class M {
//   public:
//   int m;
//   M(){
//     cout<<"\n this is M default constructor call";
//   }
//   M( int m){
//     cout<<"\n this is M parametrized constructor call";
//     this->m = m;
//   }
//   ~M(){
//     cout<<"\n this is M destructor call";
//   }

// };
// class N {
//   public:
//   int n;
//   N(){
//     cout<<"\n this is N default constructor call";
//   }
//   N( int n){
//     cout<<"\n this is N parametrized constructor call";
//     this->n = n;
//   }
//   ~N(){
//     cout<<"\n this is N destructor call";
//   }

// };
 
// class P : public M, public N {
//   public:
 
//   P(){
//     cout<<"\n this is P default constructor call";
//   }
//   P(int m, int n) : M(m), N(n) {
//     cout<<"\n this is P parametrized constructor call";
    
//   }
//   ~P(){
//     cout<<"\n this is P destructor call";
//   }
//   void total(){
//     int total;
//     total = m+n;
//     cout<<"\n m is:"<<m;
//     cout<<"\n n is:"<<n;
//     cout<<"\n total is:"<<total;
//   }

// };

// int main(){
//   P obj(10,29);
//   obj.total();
//   return 0;

// }



// ========================= (Hybrid)====================================

// #include<iostream>
//  using namespace std;
//   class student {
//     protected:
//   string name;
//   string enroll;
//   public:
//   student(){
//     cout<<"\n this is student default constructor";
//   }
//   ~student(){
//     cout<<"\n this is student destructor";
//   } 

//   void getdata(){
//     cout<<" enter the name od student : ";
//     cin>>name;
//     cout<<" enter the enroll of student : ";
//     cin>>enroll;
//   }

//   };

//   class subject : public student{
//     protected:
//   int sub1;
//   int sub2;
//   public:
//   subject(){
//     cout<<"\n this is subject default constructor";
//   }
//   ~subject(){
//     cout<<"\n this is subject  destructor";
//   }
//   void getmarks(){
//     cout<<"\n enter the subj1 marks : ";
//     cin>>sub1;
//     cout<<"\n enter the subj2 marks : ";
//     cin>>sub2;
    
//   }
//   };

//   class sports {
//     public : 
//     int marks;
//     sports(){
//       cout<<"\n this is sport default constructor";
//     }
//     ~sports(){
//       cout<<"\n this is sport destructor";
//     }
//      void sportmark(){
//       cout<<"\n enter the marks in sports :";
//       cin>>marks;
//      }

//   };

//   class info:public subject,public sports{
//    int total;
//    public:
//    info(){
//     cout<<"\n this is info default constructor";
//    }
//    ~info(){
//     cout<<"\n this is info desrtuctor";
//    }
//    void infostd(){
//     total = sub1+sub2+marks;
//     cout<<"\n the name of the student : "<<name;
//     cout<<"\n the enroll of the student :"<<enroll;
//     cout<<"\n markes in sub1 is :"<<sub1;
//     cout<<"\n markes in sub2 is :"<<sub2;
//     cout<<"\n marks in sports is :"<<marks;
//     cout<<"\n the total marks is :"<<total;
//    }
//   };
//   int main(){

//     info obj;
//     obj.getdata(); 
//     obj.getmarks();
//     obj.sportmark();
//     obj.infostd();
//     return 0;
//   }

//  ========================= (hierachicalInheritance)====================================

// #include <iostream>
// using namespace std;
// class number{
//   public:
//   int num;
//   number(){
//     cout<<"\n this is a number default constructor is called";
//   }
//   ~number(){
//     cout<<"\n this is a number destructor is called";
//   }
//    void  getnum (){
//     cout<<"\n enter the number";
//     cin>>num;
//   }
// };
// class square : public number{
//  public:
//   square(){
//     cout<<"\n this is a squre default constructor is called";
//   }
//   ~square(){
//     cout<<"\n this is a squre destructor is called";
//   }
//    void  getsquare(){
//     int sq = num*num;
//     cout<<"Square of num : "<<sq;
    
//   }
// };
// class cube : public number{
//   public:

// cube(){
//     cout<<"\n this is a cube default constructor is called";
//   }
//   ~cube(){
//     cout<<"\n this is a cube destructor is called";
//   }
//   void  getcube (){
//     int cub = num*num*num;
//     cout<<"Square of num : "<<cub;
    
//   }
// };

// int main(){
// square obj;
// obj.getnum();
// obj.getsquare();
// cube obj1;
// obj1.getnum();
// obj1.getcube();

// }

// ===================================friend function=====================================

// #include<iostream>
// using namespace std;
// class student{
//     private:
//     int mark1;
//     int mark2;
//     public:
//     void getdata(int m,int m2){
//         mark1 = m;
//         mark2 = m2;
//     }
//     friend void show(student);
// };

// void show( student obj){
//     cout<<"\n marks frist : "<<obj.mark1;
//     cout<<"\n marks sec : "<<obj.mark2;
// }

// int main(){
//     student ob;
//     ob.getdata(22,33);
//     show(ob);
//     return 0;
// }


// ===================================static methid(use to count the number of objects created)=====================================

// #include <iostream>
// using namespace std;

// class point {
//     int x;
//     int y ;
//     public:
//     static int count ;
//     point(){
//         cout<<"this is default constructor";
//         count++;
//     }
//     point(int X,int Y){
//         cout<<"this is parametrized  constructor";
//         count++;
//     }
//     static int getctr(){
//         return count;
//     }
// };
// int point::count=0  ;

// int main() {
//     point obj1;
//     point obj2(30,40);
//     point obj3;
    
//     // Display the count of objects created
//     cout << "\nNumber of objects created: " << point::getctr() ;
//     cout << "\nNumber of objects created: " << point::count ;
//     cout << "\nNumber of objects created: " << obj3.getctr() ;
    
    
//     return 0;
// }

// =============================================================================

// #include <iostream> 
// using namespace std;

// class test {
//  public:
//  void add ( int a =0,int b=0 , int e=0, int d=0, int z=0){
//     int c ;
//     c = a+b+e+d+z;
//     cout<<"\n addition is :" <<c;

//  }
// };
// int main(){
//     test obj ;
//     obj.add(11,22);
//     obj.add(11,22,33);
//     obj.add(11,22,44,5);
// }

// ======================================= 16/06/25(method overloding)=================================

// #include<iostream>
// using namespace std;
// class Test {
//     public:
//     void add(){
//         int a=10;
//         int b=20;
//         int c=a+b;
//         cout<<"\naddition is "<<c;
//     }
//     void add(int a,int b){
//         cout<<"\n additon with 2 argument"<<(a+b);
//     }
//     void add(int a,int b,int c){
//         cout<<"\n additon with 3 argument"<<(a+b+c);
//     }
//     void add(float a,int b,int c){
//         cout<<"\n additon with float and int argument"<<(a+b+c);
//     }

// };

// int main(){
//     Test ob;
//     ob.add();
//     ob.add(11,22);
//     ob.add(33,44,55);
//     ob.add(33.4f,44,55);
//     return 0;

// }


// ======================================= 16/06/25(operetor overloding)=================================

#include<iostream>
using namespace std;
class Point{
    public:
    int x;
    int y;
    public:
    Point(int a,int b){
        x=a;
        y=b;
    }
    bool operator ==(Point p2){
     return x==p2.x && y == p2.y;
    }

};

int main(){
    Point p1(10,20);
    Point p2(10,20);
    if(p1==p2){
        cout<<"both p1 and p2 are equal";
    }else {
        cout<<"not equal";
    }
    return 0;
}