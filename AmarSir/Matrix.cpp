#include<iostream>
using namespace std;

class MatrixOp{
   public:
void matrixInsert(int m , int n){
        int arr[m][n];
       for(int i = 0;i<m;i++){
              for(int j =0 ;j<n;j++){
                   cout<<"Enter the "<<i<<j<<" : ";
                   cin>>arr[i][j];
              }
          }
     }
 
};

int main(){
      int m , n;
      cout<<"Enter the size of the array m&n : ";
     cin>>m>>n;
     MatrixOp obj;
    obj.matrixInsert(m,n);
}

