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

#include<iostream>
using namespace std;
int main(){
    for(int i= 1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if((j<=5) and (j==i or j==5)) {
                cout<<"* ";
            }
           else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    
}