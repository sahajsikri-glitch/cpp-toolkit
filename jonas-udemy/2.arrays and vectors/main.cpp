#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>//for c style string functions
#include <cctype>//for character based functions
#include <cstdlib>//required for rand()
#include <ctime>//required for time()
using namespace std;

// SECTION-06 :
// ARRAY

// int main(){
// char vowels2 [5] {};
// cout<<vowels2<<endl;
// char vowels [5] {'a','e','i','o','u'};
// cout<<"the first vowel is : "<<vowels[0]<<endl;
// cout<<vowels<<endl; // hexadecimal value(MEMORY ADDRESS)
// // cin>>vowels[5];//dont do this program crashed
// double hi_temp [] {90.1,89.4,22.2,239.2};
// hi_temp[0]=43.2;
// cout<<hi_temp[0]<<endl;
// cout<<hi_temp<<endl;
// return 0;}

//declaring and initializing array
// int main(){
// int a[5]={1,2,3,4,5};
// for(int i=0;i<5;i++){
//   cout<<" "<<a[i];
// }
// cout<<endl;}

// //2-DIMAENSIONAL ARRAY
// int main(){
// int movie_rating[3][4]{{1,2,3,4},{4,5,6,7},{6,7,8,9}};
// cout<<movie_rating<<endl;}

//PRINTING A MATRIX
// int main(){
// int b[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
// for(int i=0;i<3;i++){
//   for(int j=0;j<3;j++){
//   cout<<b[i][j];}
//   cout<<endl;
// }}

//VECTOR
// int main(){
// // vector <char> vowel;//empty(declaring)
// vector <char> vowel{'a','e','i'};//(initialization)
// cout<<vowel[2]<<endl;

// vector <int> test_score{100,40,59};
// test_score.push_back(80);
// //array syntax
// cout<<test_score[0];
// cout<<test_score[1];
// cout<<test_score[2];
// cout<<test_score[3]<<endl;
// //vector syntax  
// cout<<test_score.at(0)<<endl;
// cout<<test_score.at(2)<<endl;
// cout<<"there are "<<test_score.size()<<" scores in the vector"<<endl;
// // cout<<"program stopping!!!! "<<test_score.at(10)<<endl;
// }

//examples of 2d vectors
// int main(){
// vector <vector <int>> movie_ratings{
//   {1,2,3,3},{3,4,5,7},{8,8,9,6}
// };
// cout<<"here are the movie ratings for reviewers #1 using array syntax"<<endl;
// cout<<movie_ratings[0][0]<<endl;
// cout<<movie_ratings[0][1]<<endl;
// cout<<movie_ratings[0][2]<<endl;
// cout<<movie_ratings[0][3]<<endl;
// cout<<movie_ratings[2][2]<<endl;
// }

// //DECLARING EMPTY 2 VECTORS
// int main(){
//   vector <int> vector1{3,5,2,4};
//   vector <int> vector2{3,4,2,6,34};
//   vector <vector<int>> vector_2d;
//   vector_2d.push_back(vector1);
//   vector_2d.push_back(vector2);
//   cout<<vector_2d.at(0).at(0)<<" "<<vector_2d.at(0).at(1)<<endl;
//   cout<<vector_2d.at(1).at(0)<<" "<<vector_2d.at(1).at(1)<<endl;
//   vector1.at(0) = 1000;
//   cout<<vector_2d.at(0).at(0)<<" "<<vector_2d.at(0).at(1)<<endl;
//   cout<<vector_2d.at(1).at(0)<<" "<<vector_2d.at(1).at(0)<<endl;
//   cout<<vector1.at(0);
//   cout<<vector1.at(1);
// }

//SECTION CHALLENGE
// int main(){
// vector <int> vector1;
// vector <int> vector2;
// vector1.push_back(10);
// vector1.push_back(20);
// cout<<vector1.at(0)<<endl;
// cout<<vector1.at(1)<<endl;
// cout<<vector1.size()<<endl;
// vector2.push_back(100);
// vector2.push_back(200);
// cout<<vector2.at(0)<<endl;
// cout<<vector2.at(1)<<endl;
// cout<<vector2.size()<<endl;
// vector <vector<int>> vector_2d;
// vector_2d.push_back(vector1);
// vector_2d.push_back(vector2);
// cout<<vector_2d.at(0).at(0)<<endl;
// cout<<vector_2d.at(0).at(1)<<endl;
// cout<<vector_2d.at(1).at(0)<<endl;
// cout<<vector_2d.at(1).at(1)<<endl;
// vector_2d[0][0] = 1000;
// cout<<vector_2d.at(0).at(0)<<endl;
// cout<<vector_2d.at(0).at(1)<<endl;
// cout<<vector_2d.at(1).at(0)<<endl;
// cout<<vector_2d.at(1).at(1)<<endl;
// cout<<vector1.at(0)<<endl;
// cout<<vector1.at(1);
// return 0;
// }

// SECTION - 07 CHALLENGE :
// Project: Stock Portfolio Analyzer

// int main(){
//   //initializing and declaring stock companies
//   double reliance[3]{};
//   double tcs[3]{};
//   double hdfc_bank[3]{};

//   //taking input from users 
//   cout<<"add stocks : reliance           ";
//   cin>>reliance[0]>>reliance[1]>>reliance[2];
  
//   cout<<"add stocks : tcs                ";
//   cin>>tcs[0]>>tcs[1]>>tcs[2];
  
//   cout<<"add stocks : hdfc bank          ";
//   cin>>hdfc_bank[0]>>hdfc_bank[1]>>hdfc_bank[2];
  
//   cout<<"=== Stock Portfolio Report ==="<<endl;
//   cout<<"Total Portfolio Value : ₹3,45,275.00";
//   cout<<"Overall Return        : +2.84%";
//   cout<<"\n Stock Details:";
//   cout<<"Ticker      Shares   Buy Price   Current    Gain/Loss    %"<<endl;
//   cout<<"RELIANCE    "<<reliance[0]<<"     "<<reliance[1]<<"     "<<reliance[2]<<"     "<<(reliance[2]-reliance[1])*reliance[0]<<"     "<<reliance[2]/reliance[1]*100<<endl;
//   cout<<"tcs    "<<tcs[0]<<"     "<<tcs[1]<<"     "<<tcs[2]<<"     "<<(tcs[2]-tcs[1])*tcs[0]<<"     "<<tcs[2]/tcs[1]*100<<endl;
//   cout<<"hdfc_bank    "<<hdfc_bank[0]<<"     "<<hdfc_bank[1]<<"     "<<hdfc_bank[2]<<"     "<<(hdfc_bank[2]-hdfc_bank[1])*hdfc_bank[0]<<"     "<<hdfc_bank[2]/hdfc_bank[1]*100<<endl;
//   return 0;
// }