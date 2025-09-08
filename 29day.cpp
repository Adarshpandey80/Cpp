
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
//   if(i%a==0&&i%b==0&& i%c==0){
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

// #include<iostream>
// using namespace std;
// int main(){
//   float phy,che,math;
//   cout<<"enter the marks of phy,che,math"<<endl;
//   cin>>phy>>che>>math;
//   if(phy<33 && che<33 && math<33){
//     cout<<"fail"<<endl;
//     cout<<phy<<" "<<che<<" "<<math<<endl;
//   } else if(phy<=45 &&che<=45&&math<=45){
//     cout<<"third"<<endl;
//   } else if(phy<=60 && che<=60&& math<=60){
//     cout<<"second"<<endl;
//   } else if(phy>=60 &&che>=60&&math>=60){
//     cout<<"first"<<endl;
//   } else if(phy<33 && che<33 && math<33){
//     cout<<"fail"<<endl;
//     cout<<phy<<che<<math;
//   }
//   return 0;
// }  

// #include<iostream>
// using namespace std;
// int main(){
//   float phy,che,math;
//   cout<<"enter the marks of phy,che,math"<<endl;
//   cin>>phy>>che>>math;
//   if(phy>0 && phy<33 && che>0 && che<33 && math>0 && math<33){
//     cout<<"fail"<<endl;
//     cout<<"your phy num is"<<phy;
//     cout<<"your che num is"<<che;
//     cout<<"your math num is"<<math;
//     } else if(phy>=33 && phy<=45 && che>=33 && che<=45 && math>=33 && math<=45){
//       cout<<"third division "<<endl;
//       } else if(phy>=45 && phy<=60 && che>=45 && che<=60 && math>=45 && math<=60){
//         cout<<"second division "<<endl;
//       } else if(){
//          cout<<"first division "<<endl;
//       }
// }


//                  09/04/25  bitwise oprator

// #include<iostream>
// using namespace std;
// int main(){
//   int a=12 ,b=13 ,c;
//   c= a&b;
//   cout<<c;
  
// }

// wap of bill managment system in restorent 

// #include<iostream>
// using namespace std;
// int main(){
//   int choice ;
//   int  smosa =10, kachodi = 15 , jalebi = 20; 
//   cout<<" choose 1 for smosa , kachodi and jalebi"<<endl;
//   cout<<" choose 2 for smosa , kachodi"<<endl;
//   cout<<"choose 3 for smosa and jalebi"<<endl;
//   cout<<"choose 4 for kachodi and jalebi"<<endl;
//   cout<<"choose 5 for smosa "<<endl;
//   cout<<"choose 6 for kachodi "<<endl;
//   cout<<"choose 7 for jalebi "<<endl;
//  cin>>choice;
//  switch(choice){
//   case 1: 
//    int n1,n2,n3,bill1;
//    cout<<"enter the number of smosa , kachodi and jalebi"<<endl;
//    cin>>n1>>n2>>n3;
//    bill1 = n1*10 + n2*15 + n3*20;
//    cout<<"your bill is "<<bill1<<endl;
//    break;
//    case 2:
//    int n4,n5,bill2;
//    cout<<"enter the number of smosa and kachodi"<<endl;
//    cin>>n4>>n5;
//    bill2 = n4*10 + n5*15;
//    cout<<"your bill is "<<bill2<<endl;
//    break;
//    case 3:
//    int n6,n7,bill3;
//    cout<<"enter the number of smosa and jalebi"<<endl;
//    cin>>n6>>n7;
//    bill3 = n6*10 + n7*20;
//    cout<<"your bill is "<<bill3<<endl;
//    break;
//    case 4:
//    int n8,n9,bill4;
//    cout<<"enter the number of kachodi and jalebi"<<endl;
//    cin>>n8>>n9;
//    bill4 = n8*15 + n9*20;
//    cout<<"your bill is "<<bill4<<endl;
//    break;
//    case 5:
//    int num,bill5;
//    cout<<"enter the number of smosa "<<endl;
//    cin>>num;
//    bill5 = num*10;
//    cout<<"your bill is "<<bill5<<endl;
//    break;
//    case 6:
//    int num1,bill6;
//    cout<<"enter the number of kachodi "<<endl;
//    cin>>num1;
//    bill6 = num1*15;
//    cout<<"your bill is "<<bill6<<endl;
//    break;
//    case 7:
//    int num2,bill7;
//    cout<<"enter the number of jalebi "<<endl;
//    cin>>num2;
//    bill7 = num2*20;
//    cout<<"your bill is "<<bill7<<endl;
//    break;
//  default:
//    cout<<"Invalid choice! Please select between 1-7"<<endl;
//  }
// }

//                 10/04/25  bitwise op.

// #include<iostream>
// using namespace std;
// int main(){
//   int a=12 ,b=13 ,c;
//   c= a&b; // and
//   cout<<c<<endl;
//    c= a|b; //or
//   cout<<c<<endl;
//    c= a^b; // xor
//   cout<<c<<endl;
//    c= ~a;  //not 
//   cout<<c<<endl;
//    c= ~b;  //not
//   cout<<c<<endl;
// }

//          loop

// #include<iostream>
// using namespace std;
// int main(){
//   int i=0;
//   while(i<5){
//     cout<<"hello"<<endl;
//     i++;
//   }
//   cout<<i<<endl;
// }

//wap to find the sun of frist natural number input taken from user
// wap to chack the num have four factor or prime num or both not
//wap to reverse the given input taken from user 
// wap to find factoreal of a num 
// wap to sum of factorial of num
// wap to chack num is palindorm or not 
// wap to find the num is armstrom or not
//wap to print the fibonacchi series 0,1,1,2,3,5,8,13........
// wap to ptint math table
// wap to find the value of 1-2 +3-4+5-6+7-8+9-10
//wap to find the sum of factorial f1/1 !+f2/2!+f3/3!+f4/4!+
// wap to find the lcm and hcm of two given user input num
// wap to print the series 10,9,8,7....
// wap to find sum of input digit 
//wap a prob to chack the given num is perfect or not 


// #include<iostream>
// using namespace std;
// int main(){
//   int n, i= 1, sum=0;
//   cout<<"enter the num"<<endl;
//   cin>>n;
//   while(i<=n){
//     sum=sum+i;
//     i++;
//   }
//   cout<<"sum of first "<<n<<" natural num is "<<sum<<endl;
// }


//wap to chack the num have four factor or prime num or both not
// #include<iostream>
//   using namespace std;
//   int main(){
//     int n;
//     cout<<"enter the num"<<endl;
//     cin>>n;
//     int i=1;
//     int count=0;
//     while(i<=n){
//       if(n%i==0){
//         count++;  
//         }
//         i++;
//         }
//         if(count==4){
//           cout<<"num have four factor"<<endl;
//           }
//           else if(count==2){
//             cout<<"num is prime num"<<endl;
//             }
//             else{
//               cout<<"num have both not have four factor and not prime num"<<endl;
//               }
//               return 0;
//               }  

// wap to reverse num and chack palindrom

// #include<iostream>
// using namespace std;
// int main (){
//     int n, rev=0, p;
//     cout<<"enter the num"<<endl;
//     cin>>n;
//     p = n; 
//     while(n>0){
//         int rem = n%10;
//         rev = rev*10 + rem;
//         n = n/10;
//     }
    
//     cout<<"reverse of num is "<<rev<<endl;
    
//     if(p == rev){  
//         cout<<"num is palindrome"<<endl;
//     }
//     else{
//         cout<<"num is not palindrome"<<endl;  
//     }
//     return 0;
// }
     
     // wap of factorial and sum of factorial

// #include<iostream>
// using namespace std;
// int main(){
//     int n,fact=1,i=1 , sum=0;
//     cout<<"enter the num"<<endl;
//     cin>>n;
//     while(i<=n){
//         fact = fact*i;
//         cout<<fact<<endl;
//     sum = sum + fact;
//      i++;
//     }
//      cout<<"the sum of factorial is "<<sum<<endl;
// }

//               armstrom num 


// #include<iostream>
// using namespace std;
// int main(){
//     int n , temp , rem = 0;
//     cout<<"enter the num"<<endl;
//     cin>>n;
//     temp = n;
//     while(n>0){
//         int num = n%10;
//         rem = rem + num*num*num;
//         n = n/10;
//         }
//         if(temp == rem){
//             cout<<"num is armstrong"<<endl;
//             }
//             else{
//                 cout<<"num is not armstrong"<<endl;
//                 }
// }


//      wap of fibonacci series

// #include<iostream>
// using namespace std;
// int main(){
//     int n ,i =0 ,f1= 0, f2=1 , sum = 0;
//     cout<<"enter the num"<<endl;
//     cin>>n;
//     while(i<=n){
//          cout<< f1<<endl;
//         sum = f1 + f2;
//         f1=f2;
//         f2=sum;
//         i++;
//         }
//     }

// math table 

// #include<iostream>
// using namespace std;
// int main(){
//     int n,i=0 , t ;
//     cout<<"enter the num"<<endl;
//     cin>>n;
//     while(i<=10){
//      t = n*i;
//      cout<<t<<endl;
//      i++;
//     }
// }


//wap to find the value of 1-2 +3-4+5-6+7-8+9-10

// #include<iostream>
// using namespace std;
// int main(){
//     int n,i =0, sum = 0;
//     cout<<"enter the num"<<endl;
//     cin>>n;
//     while(i<=n){
//      if(i%2 == 0){
//           sum = sum - i;
//           }
//            else{
//                sum = sum + i;
//                }
//                i++;
//                }
//                cout<<sum<<endl;
//                return 0;
//     }
    
//wap to find the sum of factorial f1/1 !+f2/2!+f3/3!+f4/4!+

// #include<iostream>
// using namespace std;
// int main(){
//      int n,i = 1, sum = 0;
//      cout<<"enter the num"<<endl;
//      cin>>n;
//      while(i<=n){
//           int fact= 1,c;
//           c = fact*i;
//           sum = sum + (i*c)/i;
//           i++;
//           }
//           cout<<sum<<endl;
//           return 0;
//           }

// wap to print the series 10,9,8,7....

// #include<iostream>
// using namespace std;
// int main(){
//      int n,i=0;
//      cout<<"enter the num"<<endl;
//      cin>>n;
//      while(i<=n){
//           cout<<n-i<<endl;
//           i++;
//      }
// }

// wap to find sum of input digit 

// #include<iostream>
// using namespace std;
// int main(){
//      int n,sum=0;
//      cout<<"enter the num"<<endl;
//      cin>>n;
//      while(n>0){
//           sum = sum + n%10;
//           n=n/10;
//      }
//      cout<<"the sum of digit is "<<sum<<endl;
// }

//wap a prob to chack the given num is perfect or not 

// #include<iostream>
// using namespace std;
// int main(){
//      int n,i=1,sum=0,n1;
//      cout<<"enter the num"<<endl;
//      cin>>n;
//      n1 = n;
//      while(i<n){
//           if(n%i==0){
//                // cout<<i<<endl;
//             sum = sum + i;
//           }
//           i++;
//          }
//         if(n1 == sum){
//             cout << sum<< " is a perfect number" << endl;
//                     }
//            else {
//             cout << sum << " is not a perfect number" << endl;
//                  }
//  }

//                12/04/25  nested while loop

// #include<iostream>
// using namespace std;
// int main(){
//      int i=5;
//      while(i>0){
//           cout<<i;
//           int j=5;
//           while(j>0){
//                cout<<i;
//                j--;
//           }
//           i--;
//           cout<<endl;
//      }
// }

//wap to peint 5 *4 ,4 *3,3*2,2*1;

// #include<iostream>
// using namespace std;
// int main(){
//      int i=1;
//      while(i<=5){
//           int j = 1;
//           while(j<=i){
//                cout<<" *";
//                j++;
//                }
//               cout<<endl;
//                i++;
//                }
//                return 0;
// }
 


// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cout<<"enter the num"<<endl;
//     cin>>n;
//      for(int i=1 ; i<20;i++){
//           if(n==1){
//                cout<<"program of table es"<<endl;
//                 int n,i=0 , t ;
//                  cout<<"enter the num"<<endl;
//                    cin>>n;
//                   while(i<=10){
//                   t = n*i;
//                    cout<<t<<endl;
//                     i++;
//                    }  
//                 break;
//           }
//           else if(n==2){
//                cout<<"program of factorial es"<<endl;
//                  int n,fact=1,i=1 , sum=0;
//             cout<<"enter the num"<<endl;
//              cin>>n;
//              while(i<=n){
//             fact = fact*i;
//             cout<<fact<<endl;
//             sum = sum + fact;
//                i++;
//                }
//              cout<<"the sum of factorial is "<<sum<<endl;
//              break;
             

//           }
//           else if(n==3){
//                cout<<"program of fibonacci es"<<endl;
              
//                int n ,i =0 ,f1= 0, f2=1 , sum = 0;
//                     cout<<"enter the num"<<endl;
//                      cin>>n;
//                  while(i<=n){
//                 cout<< f1<<endl;
//                   sum = f1 + f2;
//                     f1=f2;
//                      f2=sum;
//                     i++;
//                      }
//                      cout<<"the sum of fibonacci is "<<sum<<endl;
//                      break;
//           }
//           else if(n==4){
//                cout<<"program of armstrom"<<endl;
//                 int n , temp , rem = 0;
//                cout<<"enter the num"<<endl;
//               cin>>n;
//                temp = n;
//                 while(n>0){
//                 int num = n%10;
//                 rem = rem + num*num*num;
//                 n = n/10;
//                   }
//                  if(temp == rem){
//                cout<<"num is armstrong"<<endl;
//             }
//             else{
//                 cout<<"num is not armstrong"<<endl;
//                 }
//                 break;
//           }
//           else if(n==5){
//                cout<<"program of prime and four facror"<<endl;
//                 int n;
//                  cout<<"enter the num"<<endl;
//                  cin>>n;
//                 int i=1;
//                    int count=0;
//             while(i<=n){
//                  if(n%i==0){
//                    count++;  
//                  }
//                   i++;
//                    }
//                 if(count==4){
//                 cout<<"num have four factor"<<endl;
//                }
//                else if(count==0){
//             cout<<"num is prime num"<<endl;
//             }
//             else{
//               cout<<"num have both not have four factor and not prime num"<<endl;
//               }
//               break;     

//           }
//           else if(n==6){
//                cout<<"wap to find the sum of factorial f1/1 !+f2/2!+f3/3!+f4/4!+"<<endl;
//                    int n,i = 1, sum = 0;
//                    cout<<"enter the num"<<endl;
//                    cin>>n;
//                  while(i<=n){
//                   int fact= 1,c;
//                   c = fact*i;
//                   sum = sum + (i*c)/i;
//                    i++;
//                  }
//                  cout<<sum<<endl;
//                  break;

//           }else {
//                cout<<"invalid choice"<<endl;
//           }

//      }
// }

// wap taking two input from user n1 and n2 .
// when the user input n2 find out all the palindrom num n1 and num of n2

// #include<iostream>
// using namespace std;
// int main(){
//      int n1,n2,n3,i=1;
//      cout<<"enter the value of n1 and n2"<<endl;
//      cin>>n1;
//      cin>>n2;
//      n3 = n1+1;
//     while(i<=n2){
//      int temp = n3, rem =0 , r;
//      while(temp>0){
//           r = temp%10;
//           rem = rem*10+r;
//           temp = temp/10;
//            }
//           if(rem == n3){
//                cout<<rem<<endl;
//                i+=1;
//           }
//           n3+=1;
     
//     }
// }

// 

// #include<iostream>
// using namespace std;
// int main(){
//      int n ,count=0;
//      cout<<"enter the value of n"<<endl;
//      cin>>n;
     
//      for(int i = 1 ;i<=n;i++){
//           if(n%i==0){
//                count++;
//                }
//                 }
//                 if(count==2){
//                     cout<<"prime"<<endl;
//                     }else{
//                          cout<<"not prime"<<endl;
//                          }
//   }

//wap to find prime num btn  two num n1 and n2

// #include<iostream>
// using namespace std;
// int main(){
//      int n1,n2;
//      cout<<"enter the num n1 and n2"<<endl;
//      cin>>n1>>n2;
//      for(int i=n1;i<=n2;i++){
//         int cnt = 0;
//         for(int j=1;j<=i;j++){
//             if(i%j==0){
//                 cnt++;
//             }
//         }
//         if(cnt==2){
//             cout<<"prime num ="<<i<<endl;
//             }
//      }
// }
       
          //  16/04/25  comma saprate oprator;

//   #include<iostream>
//   using namespace std;
//   int main(){
//      int a=(1,2,3,4,5);
//      cout<<a<<endl;
//   }        

//pree/post increment 

// #include<iostream>
// using namespace std;
// int main(){
//      int a=10,b=4;
//      cout<<++a<<endl;
//      cout<<a++<<endl;
//      cout<<--b<<endl;
//      cout<<b--<<endl;
//      cout<<b<<endl;
// }

// add 10 num using do while loop

//#include<iostream>
// using namespace std;
// int main(){
//      int i = 1 ,sum =0 ;
//      do{
//           sum  = sum +i;
//           cout<<sum<<endl;
//           i++;

//      }
//      while(i<=10);
// }

//                   18/04/25

// Rate in a Maze Problem

// #include<iostream>
// #include<vector>
// using namespace std;

// void helper(vector<vector<int>> &mat , int r, int c, string path, vector<string> &ans , vector<vector<bool>> &vis){
//      int n = mat.size();
//      if(r<0 || c<0 || r>=n || c>=n || vis[r][c] == true || mat[r][c] == 0){
//           return;
//      }
//      if(r == n-1 && c == n-1){
//           ans.push_back(path);
//           return;
//      }
//      vis[r][c] = true;
//      helper(mat , r-1 , c , path + 'U' , ans , vis);
//      helper(mat , r+1 , c , path + 'D' , ans , vis);
//      helper(mat , r , c-1 , path + 'L' , ans , vis);
//      helper(mat , r , c+1 , path + 'R' , ans , vis);
//      vis[r][c] = false;
// }
// // complete this function
// vector<string> findPath(vector<vector<int>> &mat) {
//      int n = mat.size();
//      vector<string> ans;
//      string path = "";
//      vector<vector<bool>> vis(n , vector<bool>(n , false));
//      helper(mat , 0 , 0 , path , ans , vis);
//      return ans;
// }

// int main(){
//      vector<vector<int>> mat = {{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
//      int n = mat.size();
//      vector<string> ans = findPath(mat );
//      for(auto i : ans){
//           cout<<i<<endl;
//      }
//      return 0;
// }

// palindrome partioning 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
   bool isPalion(string s){
    string s2 = s;
    reverse(s2.begin() , s2.end());
    return s == s2;
   }


   void getAllParts(string s ,vector<string>  &partitions ,vector<vector<string>> &ans){
    if(s.size()==0){
        ans.push_back(partitions);
        return ;
    }
    for(int i=0; i<s.size(); i++){
        string part = s.substr(0,i+1);

        if(isPalion(part)){
            partitions.push_back(part);
            getAllParts(s.substr(i+1) , partitions , ans);
            partitions.pop_back();
        }
    }
   }


    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string>  partitions ;
        getAllParts(s, partitions , ans);
        return ans;
    }
};

int main(){
    Solution obj;
    string s = "aab";
    vector<vector<string>> ans = obj.partition(s);
    for(auto i : ans){
        for(auto j : i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}