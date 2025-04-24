// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5] = {23,33,44,55,66};
//     cout<<*arr<<endl;
//     cout<<*(arr+1)<<endl;
//     cout<<arr[4]<<endl;;
//     int sum = 0;
//     for (int i =0 ; i<5 ; i++){
//         cout<<arr[i]<<endl;
//         sum = sum + arr [i]; // sum of array
    
//     }
//     cout<<sum;
    
// }



// wap to sort the array in assending and desending order


// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"enter the size of array"<<endl;
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cout<<"enter the elements of array" <<i+i <<endl;
//         int data;
//         cin>>data;
//         arr[i] = data;
//     }
    
//     for(int i =0 ; i<n;i++){
//         for(int j= i+1 ; j<n;j++){
//             if(arr[i]>arr[j]){
//                 int temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] =  temp;
//             }
//         }
//     }
//     for(int i =0 ;i<n;i++){
//         cout<<arr[i]<<endl;
//     }
// }


///          decending order

// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"enter the size of array"<<endl;
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cout<<"enter the elements of array" <<i+i <<endl;
//         int data;
//         cin>>data;
//         arr[i] = data;
//     }
    
//     for(int i =0 ; i<n;i++){
//         for(int j= i+1 ; j<n;j++){
//             if(arr[i]< arr[j]){
//                 int temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] =  temp;
//             }
//         }
//     }
//     for(int i =0 ;i<n;i++){
//         cout<<arr[i]<<endl;
//     } 
    
// }



// wap to take to input form user and also size of an array and insert are number and show them 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the size of array"<<endl;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cout<<"enter the element of arrays"<<i+1<<endl;
//         int data;
//         cin>>data;
//         arr[i] = data;
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<endl;
//     }
   
// }

// wap to find consonent and vovel from array;

#include<iostream>
using namespace std;
int main(){
  int arr[5] = {55,33,77,55,44};
  int vovel = 0;
  int conso = 0;
  for(int i =0 ;i<5;i++){
    if(arr[i]=='a'|| arr[i]=='e' || arr[i] == 'i' || arr[i]=='o' ||arr[i] == 'u'){
       vovel+=1;
        
    } else {
        conso+=1;
    }
  }
     cout<<vovel<<endl;
     cout<<conso<<endl;
}