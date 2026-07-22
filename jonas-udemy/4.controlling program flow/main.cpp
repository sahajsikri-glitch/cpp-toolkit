#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>//for c style string functions
#include <cctype>//for character based functions
#include <cstdlib>//required for rand()
#include <ctime>//required for time()
using namespace std;

// SECTION - 09 :
// CONTROLLING PROGRAM FLOW

// // LOOPS (FOR)
// // 1)printing numbers from 75 to 50
// // for (int i =75;i>=50;i=i-5){
// //   cout<<"numbers are "<<i;
// // }
// // int i{75};
// // while(i>50){
// //   cout<<"numbers are "<<i<<endl;
// //   i=i-5;
// // }

// // // 2)FIBINOCCI[1 1 2 3 5 8 13 21]
// // int next;
// // int n1=1,n2 = 1;
// // cout<<n1<<n2;
// // for(int i=1;i<=6;i++){
// //   next=n1+n2;
// //   n1 = n2;
// //   n2=next;
// //   cout<<next;
// // }

// // while()

// //SUM OF POSITIVE INT
// // int num,sum=0;
// // cout<<"the integers are: ";
// // do{
// //   cin>>num;
// //   if(num>0){
// //     sum+=num;
// //   }
// // }
// //   while (num!=0);

// //   cout<<"the sum of positive number integers: "<<sum;

// // PATTERN MAKING

// int main(){
// * 
// * * 
// * * * 
// * * * * 
// * * * * *
// int n;
// cin>> n;
// for(int i = 1;i<=n;i++){
//   for(int j=1;j<=i;j++){
//     cout<<"*";
//   }
//   cout<<endl;
// }

// * * * * *
// * * * *
// * * *
// * *
// *
// int n;
// cin>>n;
// for(int i=1;i<=n;i++){
//   for(int j=n;j>=1;j--){
//     cout<<"*";
//   }
//   cout<<endl;
// }
// }

// for(int i=1;i<=5;i++){
//   cout<<endl;
// }
// for(int j=1;j<=i;j++){
//   cout<<" "<<"*";
// }

// NESTED IF STATEMENT

//1st illustration
// int main(){
// int score{};
// cout<<"Enter the total number youy got out of 100: ";
// cin>>score;
// char letter_grade{};
// if (score>= 0 && score<=100){
//   if (score>=90)
//   letter_grade ='A';
//   else if (score>=80)
//   letter_grade ='B';
//   else if (score>=70)
//   letter_grade ='C';
//   else if (score>=60)
//   letter_grade ='D';
//   else{
//   letter_grade ='F';
// }
// if (letter_grade == 'F')
//   cout<<"FAILED! you must repeat the class";
// else{
// cout<<"You got "<<letter_grade<<endl;
// cout<<"congrats! You're promoted to next class";
// }
// }
// else{
//   cout<<"invalid num";
// }
// }

//2nd illustration
// package question (
// base cost = $2.50
// if package dimension greater than 100 = package rejected
// and >100 means subcharge of 10%
// and >500 means subcharge of 25%
// )
// int main(){
//   double base_cost{2.50};
//   int length,width,heigth;
//   const int tier1_threshold {100};//volume
//   const int tier2_threshold {500};//volume
//   int max_dimesion{10};//inches
//   double tier1_subcharge{0.10};
//   double tier2_subcharge{0.25};
//   int package_volume{};
//   double package_cost{};

//   cout<<"welcome to the package cost calculator"<<endl;
//   cout<<"enter your dimensions values: ";
//   cin>>length>>width>>heigth;
//   if (length>max_dimesion || width>max_dimesion || heigth>max_dimesion){
//     cout<<"sorry , we cannot deliver your package";
//   }
//   else{
//     package_volume=heigth*length*width;
//     if(package_volume>=100 && package_volume<500)
//     package_cost =base_cost +(tier1_subcharge*base_cost);
//     else if(package_volume>500)
//     package_cost= base_cost+(tier2_subcharge*base_cost);
//     else{
//       package_cost= base_cost;
//     }
//     cout<<package_volume<<endl;
//     cout<<package_cost;
// }
//   }

// CONDITIONAL OPERATOR

// illustration - 1
// int main(){
//   int num;
//   cin>>num;
// cout<<"num is "<<((num%2==0)?"even":"odd")<<endl;}

// illustration - 2
// int main(){
//   int num1,num2;
//   cin>>num1>>num2;
//   if (num1 !=num2)
//   cout<<"largest num bw these 2 is "<<((num1>num2)?"num1":"num2");
// //ye bahar wala bracket very important SHOWS THESE ELEMENTS TO BE PRINT BELONGS TO ME

// }

// FOR LOOP
// illustration 1 
// int main(){
//   for(int i{0};i<=100;i+=10){
//   if(i%15==0)
//     cout<<i<<endl;
  
// }}

// illustration 2
// int main(){
//   for(int i{0};i<=100;i++){
//   cout<<i<<((i%10==0)?"\n":" ");
// }}

// illustration 3
// int main(){
// vector <int> nums {10,20,30,40};
// for(unsigned i{0};i<nums.size();i++){
// cout<<nums[i]<<endl;}}
//WHY UNSIGNED?
// coz array lengths or vector size we dk????
//       so to compare one is signed(i{0}) and the other one is 
//       unisigned (nums.size) !! 
//       TO FIX IT ONLY COMPARES unsigned -- unsigned

//RANGE BASED FOR LOOP
// int main(){
// vector <double> temp{76.7,55,6,88,9,93,4};
// double average_temp;
// double total{0};
// for (auto temps:temp){
//   total+=temps;
// }
// cout<<total/temp.size();
// }

// WHILE LOOP
// ill 1
// int main(){
//   int num;
//   cout<<"enter a num less than 100 : ";
//   cin>>num;
//   while(num>=100){
//     cout<<"enter a num less than 100 : ";
//     cin>>num;
//   }
//   cout<<"thanks";
// }

// ill 2
// int main(){
//   bool done{false};
//   while (!done)
//   {
//     int number;
//     cout<<"enter a num bw 1 to 5";
//     cin>>number;
//     if(number<=1 || number>=5){
//       cout<<"out of range"<<endl;
//     }
//     else{
//       cout<<"thanks!";
//       done=true;
//     }
//   }
// }
//GOOD QUESTION :
// que :
// Given a vector of integers, determine how many integers are present
// before you see the value -99 . Note, it's possible -99
// is not in the vector! If -99  is not in the vector then
// the result will be equal to the number of elements in the vector.
// final result should be stored in an integer variable named count.
// Note that you the different vectors will be tested against your code.
// You do not need to declare the vector of integers. 
// vec  is the name of the vector you should use.
// You can find my solution by clicking on the solution.txt file
// on the left pane. But please make sure you give it a go yourself
// first, and only check the solution if you really get stuck.

// SOL :
// int count_numbers(const vector<int> &vec) {
//     //---- WRITE YOUR CODE BELOW THIS LINE----
//     int count{0};
//     int i{0};
    
//      while (i< vec.size() && vec.at(i) != -99  ) {
//         ++count;
//         ++i;
//     }

//       else{
//         cout<<"-";
//       }
//     }
//     cout<<endl;
//   }}

//DO WHILE LOOP 
// => the simple difference between do while and while is
//  WHEN TO USE IS:
//  just if you know there should be atleast one time that
//  i've to perform this then go for do while

//ILL-1
//  int main(){
//   char selection{};//always declare this outside the loop varna lawde
//   do
//   {
//     cout<<"1. your name is Sahaj"<<endl;
//     cout<<"2. your roll no. is 966"<<endl;
//     cout<<"3. your cgpa is 8"<<endl;
//     cout<<"4. Quit"<<endl;
//     cin>>selection;
//     if(selection =='1'){
//       cout<<" your name is Sahaj "<<endl;
//     }
//     else if(selection =='2'){
//       cout<<" your roll no. is 966 "<<endl;
//     }
//     else if(selection == '3'){
//       cout<<" your cgpa is 8 "<<endl;
//     }
//     else if (selection =='Q'|| selection == 'q'){
//       cout<<"goodbye "<<endl;
//     }
//     else{
//       cout<<"unknown option ... try again "<<endl;
//     }
//   } while (selection != 'q' && selection != 'Q');
//     cout<<endl;
//     return 0;
//   }

  // int main(){
  //   vector <int> vec{1,4,2,8,3};
  //   char alph;
  //   while(true){
  //      int count{0};
  //      int n = vec.size()-1;
  //      int num;
  //     cout<<"enter you choice: "<<endl;
  //     cout<<"a or A - add a number in your list"<<endl;
  //     cout<<"p or P - print numbers in your list"<<endl;
  //     cout<<"m o M - gives median of your list"<<endl;
  //     cout<<"s or S - gives smallest number of your list"<<endl;
  //     cout<<"l or L - gives largest number of your list"<<endl;
  //     cout<<"q or Q - quit / goodbye!"<<endl;

  //     cin>>alph;
  //     switch (alph){
  //       case 'p':
  //       case 'P':
  //       for(int i =0;i<vec.size();i++){
  //         cout<<vec.at(i);
  //       }
  //       break;

  //       case 'a':
  //       case 'A':
  //       cout<<"enter the number you want to add in list: ";
  //       cin>>num;
  //       vec.push_back(num);
  //       break;

  //       case 'm':
  //       case 'M':
  //       for(int i = 0 ;i<vec.size();i++){
  //         count+=(vec.at(i));
  //       }
  //       cout<<(count/vec.size());
  //       break;

  //       case 's':
  //       case 'S':
  //       sort(vec.begin(),vec.end());
  //       cout<<vec.at(0);
  //       break;

  //       case 'l':
  //       case 'L':
  //       sort(vec.begin(),vec.end());
  //       cout<<vec.at(n);
  //       break;

  //       case 'q':
  //       case 'Q':
  //       cout<<"goodbye";
  //       break;

  //       default:
  //       cout<<"invalid num ; give any valid num again ! ";
  //       break;
  //     }
  //     if(alph == 'q' || alph == 'Q')
  //     break;
  //   }
  // }

  // quiz que 

  // Q1 .
  // int main(){
  //   int favorite;
  //   cout << "Enter your favorite number: ";
  //   cin >> favorite;
  //   if (favorite == 13)
  //   cout << "That my favorite number too!" << endl;
  //   cout << "That's amazing!" << endl;
  //   cout << "Great minds think alike!" << endl;

  //   // ## amazing concept 
  //   // if true : then all of statements will be displayed
  //   // if flase: then the last 2 statements

  // }

  // Q2 . 
  // int main(){
  //   int num = 10;
  //   while (num >= 1)
  //   cout << num << " ";
  //   // it will only consdier 1 statement 
  //   // so, its an infinite loop 
  //   num--;
  // }
