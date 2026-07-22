#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>//for c style string functions
#include <cctype>//for character based functions
#include <cstdlib>//required for rand()
#include <ctime>//required for time()
using namespace std;

//section 10 : 
// String

//  C-STRING STYLE 
// int main(){
//   char first_name[20]{};
//   char last_name[20]{};
//   char full_name[50]{};
//   char temp[50]{};
  
//   //TAKING FIRST AND LAST NAME OF USER
//   cout<<"please enter your first name";
//   cin>>first_name;
//   cout<<"please enter your last name";
//   cin>>last_name;
//   cout<<"----------------------------"<<endl;

//   cout<<first_name<<strlen(first_name)<<"characters"<<endl;
//   cout<<last_name<<strlen(last_name)<<"characters"<<endl;

//   //TAKING FULL NAME USING COUT
//   // cout<<"enter your full name";
//   // cin>>full_name;//ERROR : not appropriate only take first string
//   // cout<<"your full name is"<<full_name<<endl;
//   // cout<<"----------------------------"<<endl;
//   //TAKING FULL NAME USING GETLINE
//   cin.ignore(); //this is important to use with cin.getline
//   cout<<"enter your full name : ";
//   cin.getline(full_name,50);
//   cout<<"your full name is "<<full_name<<endl;
//   cout<<"----------------------------"<<endl;
//   // COPYING STRINGS 
//   strcpy(temp,full_name);
//   cout<<temp;

//   //CAPITIALIZING LETTERS OF STRING
//   for (size_t i{0};i<strlen(full_name);i++){
//     if(isalpha(full_name[i])){
//       full_name[i]=toupper(full_name[i]);
//     }
//   }
//   cout<<"your full name is "<<full_name<<endl;
//   //COMPARING 2 STRINGS
//   if(strcmp(temp,full_name)==0){
//     cout<<"same";}
//   else{
//     cout<<"not same";
//   }
//   cout<<"----------------------------"<<endl;
//   cout<<"result of comparing "<<temp<<" and "<<full_name<<" : "<<strcmp(temp,full_name)<<endl;
// // this one's giving 1 cause comparing temp (small letters = higher value)
// // to fullname (capital letters = smaller value) resulted in +1
//   cout<<"result of comparing "<<full_name<<" and "<<temp<<" : "<<strcmp(full_name,temp)<<endl;
// // vice and versa
// }

// C++ STRINGS (INDEXING YES)
// int main(){
//   //initializing and declaring
// string s0;
// string s1{"apple"};
// string s2{s1,0,3};//app (0 se n-1)
// cout<<s2;

// //no garbage
// cout<<s0<<endl;//empty(nothing)
// cout<<s0.length()<<endl;//nothing

// s1.at(0) = 'B';
// cout<<s1<<endl;
// // you can print a string together its not like array !

// //looping
// for(size_t i{0};i<s1.length();i++){
//   cout<<s1.at(i);
// }

// string s7{"this is test"};
// //erase
// s7.erase(0,5);
// cout<<s7;//vahi same 0 se n-1 tak erase

// //find
// string word;
// cout<<"enter the word you wanna find : ";
// cin>>word;

// int position = s1.find(word);
// if(position != string::npos){//string::npos ye cpp tab deta hai
//   //  when finding word doesnt exist
//   // (if position is not equal to doesnt exist ) or
//   // (if word is not equal to doesnt exist)
//   cout<<"found at pos : "<<position;
// }
// else{
//   cout<<"sorry couldnt found";
// }
// }

//section -10 CHALLENGE QUE :
// SUBSTITUTION CIPHER
// int main(){
//   string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
//   string key{"XHIDHASFASOAHASODHASOIDHASIOHIAOSSAODAHDAIODHIASDHIS"};
//   string secret_message{};
//   cout<<"enter your secret message: ";

//   getline(cin,secret_message);

//   string encrypted_message{};
//   for(auto c: secret_message){
//     size_t position = alphabet.find(c);
//     cout<<position;
//     if(position !=string::npos){
//       char new_char {key.at(position)};
//       encrypted_message+=new_char;
//     }
//     else{
//       encrypted_message+=c;
//     }
//   }
//   cout<<encrypted_message;
//   return 0;
// }

//ASSIGNMENT: SECTION-10(palindrome pyramid)
// int main()
// {
//     string letters{};

//     cout << "Enter a string of letters so I can create a Letter Pyramid from it: ";
//     getline(cin, letters);

//     size_t num_letters = letters.length();

//     int position {0};

//     // for each letter in the string
//     for (char c: letters) {

//         size_t num_spaces = num_letters - position;
//         while (num_spaces > 0) {
//             cout << " ";
//             --num_spaces;
//         }

//         // Display in order up to the current character
//         for (size_t j=0; j < position; j++) {
//             cout << letters.at(j);
//         }

//         // Display the current 'center' character
//         cout << c;

//         // Display the remaining characters in reverse order
//         for (int j=position-1; j >=0; --j) {
//             // You can use this line to get rid of the size_t vs int warning if you want
//             auto k = static_cast<size_t>(j);
//             cout << letters.at(k);
//         }

//         cout << endl; // Don't forget the end line
//         ++position;
//     }

//     return 0;
// }
