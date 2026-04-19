#include<iostream>
using namespace std;

class MatrixOp{
public:

void matrixInsert(int arr[3][3], int m, int n , int arr2[3][3]){

    bool an = true;

    while (an){
        string ans;
        cout<<"\nTraverse (t) Exit (e) addition (a) multiplication (m) transpose (tr): ";
        cin>>ans;

        // Traverse
        if(ans == "t"){
            for(int i = 0; i < m; i++){
                for(int j = 0; j < n; j++){
                    cout << arr[i][j] << " ";
                }
                cout << endl;
            }
        }

        // Exit
        else if(ans == "e"){
            break;
        }

        // Addition
        else if(ans == "a"){
            int sum[3][3];

            for(int i = 0; i < m; i++){
                for(int j = 0; j < n; j++){
                    sum[i][j] = arr[i][j] + arr2[i][j];
                    cout << sum[i][j] << " ";
                }
                cout << endl;
            }
        }

        // Multiplication
        else if(ans == "m"){
            int mul[3][3] = {0};

            for(int i = 0; i < m; i++){
                for(int j = 0; j < n; j++){
                    for(int k = 0; k < n; k++){
                        mul[i][j] += arr[i][k] * arr2[k][j];
                    }
                    cout << mul[i][j] << " ";
                }
                cout << endl;
            }
        }

        // Transpose
        else if(ans == "tr"){
            for(int i = 0; i < m; i++){
                for(int j = 0; j < n; j++){
                    cout << arr[j][i] << " ";
                }
                cout << endl;
            }
        }

        else{
            cout<<"Invalid input"<<endl;
        }
    }
}
};

int main(){

    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int arr2[3][3] = {{9,8,7},{6,5,4},{3,2,1}};

    MatrixOp obj;
    obj.matrixInsert(arr , 3 , 3 , arr2);

    return 0;
}