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

// #include<iostream>
// using namespace std;
// int main(){
//   int arr[5] = {55,33,77,55,44};
//   int vovel = 0;
//   int conso = 0;
//   for(int i =0 ;i<5;i++){
//     if(arr[i]=='a'|| arr[i]=='e' || arr[i] == 'i' || arr[i]=='o' ||arr[i] == 'u'){
//        vovel+=1;
        
//     } else {
//         conso+=1;
//     }
//   }
//      cout<<vovel<<endl;
//      cout<<conso<<endl;
// }


//                 25/04/25 

// #include<iostream>
// using namespace std;
// int main(){
//   cout<<"enter the size of 2 d array"<<endl;
//   int n;
//   cin>>n;
//   int arr[n][n];
//   int count =1;
//   for(int i=0 ; i<n;i++ ){
//     for(int j=0;j<n;j++){
//       cout<<"enter the elements "<<count<<endl;
//       cin>>arr[i][j];
//       count++;

//     }
//   }
//   for(int i1=0 ; i1<n;i1++ ){
//     for(int j1=0;j1<n;j1++){
     
//       cout<<arr[i1][j1];
//     }
//   cout<<endl;
//   }


// }

// #include<iostream>
// using namespace std;
// int main(){
//   int arr[6] = {22,44,55,66,77,88};
//   for(int i = 1 ;i<=6;i++){
//     cout<<"enter your choice"<<i<<endl;
//     int ch;
//     cin>>ch;
//     int j = rand()%6;
//     cout<<j<<endl;
//     if(ch == arr[j]){
//         cout<<"you are correct"<<i<<endl;
//     } else {
//         cout<<"you are wrong"<<i<<endl;
//     }
//   }
// }


// #include<iostream>
// using namespace std;
// int main(){
//   int arr[5] = {6,4,6,3,7};
// for(int i=4;i>=0;i--){
//   cout<<arr[i]<<endl;
// }
//   return 0 ;
// }

// #include<iostream>
// using namespace std;
// int main(){
//   cout<<"enter the size of array"<<endl;
//   int n;
//   cin>>n;
//   int arr[n];
//   for(int i=0;i<n;i++){
//     cout<<"enter the elements of array" <<i+1 <<endl;
//     int data;
//     cin>>data;
//     arr[i] = data;
//   }
//   for(int i=0;i<n;i++){
//     cout<<arr[i]<<endl;
//   }
//   cout<<"enter the element to be update"<<endl;
//   int data;
//   cin>>data;
//   cout<<"enter the index to be update"<<endl;
//   int index;
//   cin>>index;
//   arr[index] = data;
//   cout<<"update array is"<<endl;
//   for(int i=0;i<n;i++){
//     cout<<arr[i]<<endl;
//   }
//   cout<<"enter the element to be delete"<<endl;
//   int del;
//   cin>>del;
//   for(int i=0;i<n;i++){
//     if(arr[i] == del){
//       arr[i] = arr[i+1];
//     }
//   }
//   for(int i=0;i<n;i++){
//     cout<<arr[i]<<endl;
//   }
//   return 0;

// }


// #include<iostream>
// using namespace std;
// int largest(int arr[],int n){
//     int max = arr[0];
//     for(int i=1;i<n; i++){
//         if(arr[i]>max){
//             max = arr[i];
//         }
//     }
//     return max;
// }
// int smolest (int arr[], int n){
//     int min = arr[0];
//     for(int i=1;i<n;i++){
//         if(arr[i]<min){
//             min = arr[i];
//         }
//     }
//     return min;
// }
// int main(){
//     int num;
//     cout<<"enter the sixz of the array"<<endl;
//     cin>>num;
//     int arr[num];
//     for(int i=0;i<num;i++){
//         cout<<"enter the element of the array" <<i<<endl;   
//         int data;
//         cin>>data;
//         arr[i] =data;

//      }
//      int max = largest(arr,num);
//      cout<<"the largest element is "<<max<<endl;
//      int min = smolest (arr,num);
//      cout<<"the smallest element is "<<min<<endl;
//      return 0;
// }

// 

// #include<iostream>
// using namespace std;
// int lisearch (int arr[],int size, int element){
//     for(int i=0;i<size;i++){
//         if(arr[i]==element){
//             return i;
//         } 
//     }
//     return -1; // return -1 if the element is not found
// }
// void swaparraya(int arr[],int sz){
//     int start = 0, end = sz-1;
//     while(start<end){
//       swap(arr[start], arr[end]); 
//         start++;
//         end--;
//     }
    
// }

// int main(){
    // int size;
    // cout<<"eneter the size of the array"<<endl;
    // cin>>size;
    // int arr[size];
    // for(int i=0;i<size;i++){
    //     int data;
    //     cout<<"enter the element of the array;"<<i<<endl;
    //     cin>>data;
    //     arr[i]= data;
    // }
    // int element ;
    // cout<<"enter the element to be search"<<endl;   
    // cin>>element;
    // cout<<"the element is found at index "<<lisearch(arr,size,element)<<endl;

    // int arr[5] = {1,2,3,4,5};
    // int sz=5;
    // swaparraya(arr,sz);
    // cout<<"the array after swapping is"<<endl;
    // for(int i=0;i<sz;i++){
    //     cout<<arr[i]<<" ";
    //     }

// }

// #include<iostream>
// using namespace std;

// int uniqe (int arr[],int sz){
//     int ans;
//     for(int i=0;i<sz;i++){
//         int count =0;
//         for(int j=0;j<sz;j++){
//             if(arr[i]==arr[j] && i!=j){
//                 count++;

//             }
       
//         }
//         ans= arr[i];
     
//     }

//     return ans;
// }

// int main(){
//     int size;
//     cout<<"enter the size of the array"<<endl;
//     cin>>size;
//     int arr[size];
//     for(int i=0;i<size;i++){
//         cout<<"enter the element of the array"<<i+1<<endl;
//         int data;
//         cin>>data;
//         arr[i]= data;
//     }
//     cout<<"the unique element is "<<uniqe(arr,size)<<endl;
//     return 0;

// }


//// 2D arraya ;

#include<iostream>
#include <utility>
using namespace std;

pair<int ,int> isLinear(int arr[][3],int rows, int cols, int key){

   
      for(int i=0;i<rows ;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]==key){
                return {i,j};
            }
        }
      }
      return {-1,-1};
}

int rowSum(int arr[][3] ,int rows,int cols){
    int maxSumRow = INT_MIN;
    for(int i=0;i<rows;i++){
        int sumRow = 0;
        for(int j=0;j<cols ;j++){
            sumRow += arr[i][j];
        }
        maxSumRow = max( maxSumRow ,  sumRow );
    }
    return maxSumRow;
}

int colSum (int arr[][3] ,int rows,int cols){
    int maxColsum = INT_MIN;
    for(int i=0;i<rows;i++){
        int colsSum = 0;
        for(int j=0 ;j<cols ;j++){
            colsSum += arr[j][i];
        }
        maxColsum = max(maxColsum , colsSum);
    }
    return maxColsum;
}

int digSum (int mat[][3] ,int n){
     int sum =0;
    for(int i=0;i<n;i++){
       
        for(int j =0 ;j<n ;j++){
            if(i==j){
                sum += mat[i][j];
            } else if(j== n-i-1) {
               sum += mat[i][j];
            }
        }
    }
    return sum ;
}
int main(){
    int arr [3][3] = {{1 ,2,3} ,{4,5,6},{6,7,8} };
    int rows = 3;
    int cols = 3;
    // int key = 8;
    // pair <int ,int> result = isLinear(arr ,rows,cols,key);
    // if(result.first == -1){
    //     cout<<"key not found";
    // }  else {cout << "Key found at: (" << result.first << ", " << result.second << ")" << endl;
    // }
    //  cout<<rowSum(arr,rows,cols);
    //  cout<<colSum(arr,rows,cols);
     cout<<digSum(arr,3);
    }
   
    
