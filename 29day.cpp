// # include <iostream>
// using namespace std;
// int main (){
//     int x = 10;
//     cout<<"the value of x is ="<<x<<endl;
//     x+=10;
//      cout<<"the value of x is ="<<x<<endl;
//      x-=2;
//       cout<<"the value of x is ="<<x<<endl;
//       x/=2;
//     cout<<"the value of x is ="<<x<<endl;
//       x%=2;
//     cout<<"the value of x is ="<<x<<endl;

// }



    //  31march----------------------------------


    // #include<iostream>
    // using namespace std;
    // int main(){
    //  int a=6 ,b=3 ,c;
    //  c=a+b;
    //  cout<<"the sum of a and b is \n"<<c<<endl;
    //  c=a-b;
    //  cout<<"the difference of a and b is \n"<<c<<endl;
    //  c=a*b;
    //  cout<<"the product of a and b is \n"<<c<<endl;
    //  c=a/b;
    //  cout<<"the division of a and b is \n "<<c<<endl;
    //  c=a%b;
    //  cout<<"the  remainder a and b is \n"<<c<<endl;

    //   return 0;
    // }


    // #include <iostream>
    // #include<cmath>
    // using namespace std;
    // int main(){
      // int a=4,b=5 ,c,r=2 ,d=4,h=5;
      // float p=3.14;
      // c=1/2*(a*b);
      // cout <<"the area of trangle is \n"<<c<<endl;
      // c= a*b;
      // cout<<"the area of rectangle is \n"<<c<<endl;
      // c= p*r*r;
      // cout<<"the area of circle is \n"<<c<<endl;
      // c=a*a;
      // cout<<"the area of square is \n"<<c<<endl;
      // c=d*h;
      // cout<<" the area of rhombus is \n"<<c<<endl;
      // c= (a+b)/2*h;
      // cout<<"the area of trapezium is \n"<<c<<endl;
      // c= a*b*p;
      // cout<<"thee area of ellips is \n"<<c<<endl;
      //  c= 4*p*r*r;
      //  cout<<"the area of sphere is \n"<<c<<endl;
      //  c=b*h;
      //  cout<<"the area of paralleliogram is \n"<<c<<endl;
      //  float e =1.7; 
      //    c = e/4*a*a;
      //  cout<<"the area of equilteral triangle is \n"<<c<<endl;


                  //roots -------------------

    //   int b , a,c;
    //cout<<b<<a<<c;
    //cin>>b>>a>>c;
    //   float r,e ,d;

    //   d = b*b-4*a*c;
      
    //   r= (-b+sqrt(d))/2*a;
    //   e= (-b-sqrt(d))/2*a;
    //   cout<<"the roots of the equation are \n"<<r<<" and "<<e<<endl;

    //  } 



    //                1april---------

      //              2 april-------------

      //               3 april----------

     //       get string and reverse
     

//      #include <iostream>
//      #include <string>
//     using namespace std;

//  int main() {
//    string str1 = "hello bhopal", str2;
//    cout <<"string 1 and string 2"<<endl;
//   //  getline(cin , str1);
//   //  getline(cin , str2);
//    reverse(str1.begin(), str1.end());
//     // reverse(str2.begin(), str2.end());
//     // cout<<str1+" "+str2<<endl;
//   cout<<str1;
//     return 0;
// }


// 5 april      swap array elements ---------------------


// #include<iostream>
// using namespace std;
// int main(){
//   int arr[5] = {3,2,5,6,8};
//   // for (int i=0; i<5; i++){
//   //   if (arr[i]==2){
//   //     swap(arr[i], arr[4]);
//   //   }
//     // cout<<arr[i];
//   }
// }

//                    relational oprator 7 april 
  
// #include<iostream>
// using namespace std;
// int main(){
// int x=20,y=20,z;
// z= x==y; // equlas to
// cout<<x;
//  z= x!=y; // not equals to
//  cout<<z;
// z = z<=y;
// cout<<z;  // less then equal to
// z = z>=y;
// cout<<z; // grater then equal to
// z = z>y;
// cout<<z; 
// z = z>=y;
// cout<<z; 
// }

//wap to chack the given input is childage , teen age , young age , old age,

// #include<iostream>
// using namespace std;
// int main (){
//   int age ;
//   cout<<"inter your age";
//   cin>>age;
//   if(age<=0){
//     cout<<"child age";
//   }else if(age<=13){
//      cout<<"teen age";
//   }else if(age<=18){
//     cout<<"young age";
//     }else if(age>=60){
//       cout<<"old age";  
//     }
  
// }

// wap to find LCM of three num 

// #include<iostream>
// using namespace std;
// int main(){
//  int a,b,c ;
//  cout<<"enter the value of a,b,c for lcm"<<endl;
//  cin>>a>>b>>c;
//  for(int i = 1; i>0 ; i++){
//   if(i%b==0&&i%b==0&& i%c==0){
//     cout<<"lcm is "<<i<<endl;
//     break; 
//   }
//  }
// }

//wap to find HCF of three num 

// #include<iostream>
// using namespace std;
// int main(){
//   int a,b,c , gcf ;
//   cout<<"enter the value of a,b,c for hcf"<<endl;
//   cin>>a>>b>>c;
//   for(int i=0 ; i<=a&&i<=b&&i<=c ; i++){
//     if(a%i==0&&b%i==0&&c%i==0){
//       gcf=i;
//     }
//   }
//   cout<<"hcf is"<<gcf<<endl;
// }

//         8/4/25  find out the max num amoung three input 

// #include<iostream>
// using namespace std ;
// int main(){
//   int a,b,c ;
//   cout<<"inter three value "<<endl;
//   cin>>a>>b>>c;
//   if(a>b && a>c){
//     cout<<a;

//   }else if (b>a && b>c){
//     cout<<b;
    
//   } else {
//     cout<<c;
//   }
// }

// make a programe take three variable of float ype name phy ,che ,math and show the risult on the following condition 
// marks should be 0 o 100 ,user can pass on gating marks>=33 , if user can pass show there division , less then 45 third division
// less then 60 second devision , grater than equl 60 frist div .
// user can pass only if thry will pass in all subject.
// if user fell show there failsubject with marks .

#include<iostream>
using namespace std;
int main(){
  float phy,che,math;
  cout<<"enter the marks of phy,che,math"<<endl;
  cin>>phy>>che>>math;
  if(phy>=0 && phy<=100 && che>=0 && che<=100 && math>=0 && math<=100){
    if(phy>=33 && che>=33 && math>=33){
      if(phy<45 && che<45 && math<45){
        cout<<"second division"<<endl;
        }else if(phy<60 && che<60 && math<60){
          cout<<"first division"<<endl;
          }else{
            cout<<"second division"<<endl;
            }
            }else{
              cout<<"fail in phy "<<phy<<endl;
              cout<<"fail in che "<<che<<endl;
              cout<<"fail in math "<<math<<endl;
              }
              }else{
                cout<<"invalid marks"<<endl;
                }
}  

