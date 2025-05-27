#include<iostream>
using namespace std;
class oprations {
    public:
    int n1;
    int n2;
    void getdata(){
        cout<<"enter the data n1 and n2"<<endl;
        cin>>n1>>n2;
    }
      void showData(){
     cout<<" \n n1 is "<<n1;
        cout<<" \n n2 is "<<n2;
    }
    void add(){
        cout<<"\naddition of two num"<<(n1+n2);
    }
      void sub(){
        cout<<"\naddition of two num"<<(n1-n2);
    }
      void mul(){
        cout<<"\naddition of two num"<<(n1*n2);
    }
      void div(){
        cout<<"\n addition of two num"<<(n1/n2);
    }

};

int main(){
    oprations obj;
    obj.getdata();
    obj.showData();
    obj.add();
    obj.sub();
    obj.mul();
    obj.div();
    return 0;
}