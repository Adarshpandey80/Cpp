// * * * * * * * * * * 
// * * * *     * * * * 
// * * *         * * * 
// * *             * * 
// *                 * 

// #include<iostream>
// using namespace std;
// int main(){
//     int n = 5 ;
//     for( int i= 0 ; i<n ; i++){
//         for(int j=0 ;j<n-i ; j++){
//             cout<<"* ";
//         }
//         for(int j=0 ; j<2*i ; j++){
//             cout<<"  ";
//             }
//             for(int j=0 ; j<n-i ; j++){
//                 cout<<"* ";
//                 }
//                 cout<<endl;

//     }
// }

// *
// **
// ***
// ****
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"num"<<endl;
//     cin>>n;
//     for(int i=0 ; i<n;i++){
//         for(int j=0 ; j<=i;j++){
//             cout<<i ;
//         }
//         cout<<endl;
//     }
// }

//12/04/26      pattern
   

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the num "<<endl;
//     cin>>n;
//     for(int i =0 ; i<n;i++){
//         for(int j=0 ; j<n-i-1; j++){
//             cout<<"  ";
//             }
//          for(int k=0; k<i*2+1;k++){
//             cout<<"* ";
//          }
//          for(int l=0;l<n-i-1;l++){
//             cout<<"  ";
//          }
        
        
//         cout<<endl;
//     }
//       for(int i =0 ; i<n;i++){
//         for(int j=0 ; j<i; j++){
//             cout<<"  ";
//             }
//          for(int k=0; k<2*n-(2*i+1);k++){
//             cout<<"* ";
//          }
//          for(int l=0;l<i;l++){
//             cout<<"  ";
//          }
        
        
//         cout<<endl;
//     }
// }

// * * * *
// * * *
// * *
// *

// #include<iostream>
// using namespace std;
// int main(){
//      int n;
//      cout<<"enter the num "<<endl;
//      cin>>n;
//      for(int i=0 ; i<n;i++){
//           for(int j=0 ;j<n-i-1;j++){
//                cout<<"* ";
//           }
//           cout<<endl;
//      }
// }

      //     17/04/25 

// 1    
// 12   
// 123  
// 1234 
// 12345

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i= 1;i<=5;i++){
//         for(int j=1;j<=5;j++){
//             if(j<=i){
//                 cout<<j;
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
    
// }

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i= 1;i<=5;i++){
//         for(int j=1;j<=7;j++){
//             if(j>=(5-i) and j<=(3+i)){
//                 cout<<j;
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
    
// }

// *****
// *   *
// *   *
// *   *
// *****

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i= 1;i<=5;i++){
//         for(int j=1;j<=5;j++){
//             if(i==1 or j==1 or i==5 or j==5 or  j==i or j==6-i ) {
//                 cout<<"* ";
//             }
//            else {
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }
    
// }

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i= 1;i<=7;i++){
//         for(int j=1;j<=7;j++){
//             if(i==1 or j==1 or i==7 or j==7  or i==4 ) {
//                 cout<<"* ";
//             }
//            else {
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }
    
// }

// *   * * * 
// *   *     
// * * * * * 
//     *   * 
// * * *   * 

// #include<iostream>
// using namespace std;
// int main(){
   
//     for(int i = 0; i<5;i++){
//       for (int j=0;j<5;j++){
//            if((i==2  || j==2)||
//            (i==0&& j>2) || 
//            (i==4 && j<2) ||
//             (j==0 && i<2) ||
//            (j == 4 && i >2)){
//             cout<<"* ";
//            }  else {
//             cout << "  ";  
      
//            }
//       }
//       cout<<endl;
//     }
//     return 0;
//     }



// #include<iostream>
// using namespace std;
// int main(){
//       for(int i=0; i< 5; i++){
//             for( int j=0 ;j< 5; j++) {
//                   if ( i==0 || j== 1 || j==3){
//                         cout<<"* ";
//                   }else {
//                         cout << "  ";
//                   }

//             }
//             cout << endl;
//       }
// }

//      1
//     22
//    333
//   4444 

// #include<iostream>
// using namespace std;
// int main(){
//      for(int i=1;i<=5;i++){
//       for(int j=1;j<5-i;j++)
//       cout<<" ";
//       for(int j=1;j<=i;j++){
//             cout<<i;
//       }
//         cout<<endl;
//      }
     
// }


//  11111
//   2222
//    333
//     44
//      5


// #include<iostream>
// using namespace std;
// int main(){
//      for(int i=1;i<=5;i++){
//       for(int j=1;j<i+1;j++)
//       cout<<" ";
//       for(int j=1;j<=5-i+1;j++){
//             cout<<i;
//       }
//         cout<<endl;
//      }
     
// }

// a
// bb
// ccc
// dddd
// eeeee


// #include<iostream>
// using namespace std;
// int main(){
   
//     for(int i=97 ; i<=101;i++){
//         for(int j=97 ; j<=i;j++){
//             cout<<char(i) ;
//         }
//         cout<<endl;
//     }
// }

// a
// ab
// abc
// abcd
// abcde

// #include<iostream>
// using namespace std;
// int main(){
   
//     for(int i=97 ; i<=101;i++){
//         for(int j=97 ; j<=i;j++){
//             cout<<char(j) ;
//         }
//         cout<<endl;
//     }
// }

#include<iostream>
using namespace std;
int main(){
     for(int i=1;i<=5;i++){
      for(int j=1;j<5-i-1;j++)
      cout<<" ";
      for(int j=1;j<=i;j++){
            cout<<*"";
      }
        cout<<endl;
     }
     
}