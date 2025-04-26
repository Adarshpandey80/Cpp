// #include<iostream>
// using namespace std ;
// int main(){
//     // string str ;
//     // cout<<"enter srting"<<endl;
//     // getline(cin,str);
//     // cout<<str<<endl;

//     return 0;
// }

// #include<iostream>
// using namespace std ;
// int main(){
  
//     string str = "HELLO";
//     cout<<str.length()<<endl;
//     cout<<"for loop method"<<endl;
//     for(int i=0 ;i<str.length();i++){
//         cout<<str[i]<<endl;
//     }

//     // for of loop 

//     cout<<"for of method"<<endl;
//     for(char j : str){
//         cout<<j<<endl;
//     }

//     return 0;
// }

// addition of two string

// #include<iostream>
// using namespace std ;
// int main(){
//    string str = "hello";
//    string str1 = "bhopal";
//    cout<<str+str1<<endl;

//     return 0;
// }

// compair  to two string

// #include<iostream>
// using namespace std ;
// int main(){
//    string str = "hello";
//    string str1 = "bhopal";
//    cout<<(str==str1)<<endl;
//    cout<<str.compare(str1)<<endl;

//     return 0;
// }

// wap to reverse string welcome

// #include<iostream>
// using namespace std ;
// int main(){
//   string str = "welcome";
//   string str1 = "";
//   for(int i=0;i<str.length();i++){
//     str1 =  str[i]+str1 ;
    
//     }
//     cout<<str1<<endl;

//     return 0;
// }

//wap to remove white space in my name is adarsh
// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//   string str = "my name is adarsh";

//   cout<<removeWhitespace(str)<<endl;

// }


// wap to count vovel and consonent and white space in  the given sting above

// #include<iostream>
// using namespace std;
// int main(){
//   string str = "my name is adarsh";
//   int vovel = 0;
//   int consonent = 0;
//    for(int i=0;i<str.length();i++){
//     if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o' ||str[i]=='u'){
//       vovel++;

//     }
//       else{
//         consonent++;
//         }
      
//     }
//   cout<<"vovel "<< vovel <<endl;
//         cout<<"consonenet"<< consonent <<endl;
// }

//chack the programe the given two string scilent and listen is anargm or not 

// #include<iostream>
// using namespace std;
// int main(){
//   string str1 = "silent";
//   string str2 = "listen";
//   int count = 0;
//   for(int i=0;i<str1.length();i++){
//     for(int j=0;j<str2.length();j++){
//       if(str1[i]==str2[j]){
//         count++;
//         }
//         }

//          }
//         if(count==str1.length() && count==str2.length()){
//           cout<<"anargm"<<endl;
//           }
//           else{
//             cout<<"not anargm"<<endl;
//             }
           
            
//             return 0;
//             }




//wap to reverse the string welcome bhopal in such a way tha welcome can be reverse and bhopal 
//can be revers and bhopal comes frist and bhopal comes last

// #include<iostream>
// using namespace std;
// int main(){
//   string str = "welcome bhopal";
//   string str1 = " ";
//   for(int i =0 ;i<str.length();i++){
//     str1 = str[i] + str1;
//   }
//   cout<<str1<<endl;
// }


// print the all the asskey from a giveb string smoll a to smoll z and capital a to capital z 

// #include<iostream>
// using namespace std;
// int main(){
//   for(char i = 'a';i<='z';i++){
//     cout<<int(i)<<" ";
//     }
//     cout<<endl;
//     for(char i = 'A';i<='Z';i++){
//       cout<<int (i)<<" ";
//       }
//       return 0;
//       }

// wap to swap to string 

// #include<iostream>
// using namespace std;
// int main(){
//     string str1 = "welcome";
//     string str2 = "bhopal";
//     string str3 = str1.append(" "+str2);
//     cout<<str3<<endl;
    // cout<<"before swapping"<<endl;
    // cout<<"str1 = "<<str1<<endl;
    // cout<<"str2 = "<<str2<<endl;
    // swap(str1,str2);
    // // string temp = str1;
    // // str2 = temp;
    // cout<<"after swapping"<<endl;
    // cout<<str1<<str2<<endl;
    
// }

// wap to swap a string in assending abd desending order

// #include <algorithm>
// #include <iostream>
// using namespace std;
// int main(){
//     string str = "welcome bhopal";
//     sort(str.begin(), str.end());
//     cout << str << endl;
//     reverse(str.begin(), str.end());
//     cout << str << endl;
   
// }
