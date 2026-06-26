#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>//for c style string functions
#include <cctype>//for character based functions
#include <cstdlib>//required for rand()
#include <ctime>//required for time()
using namespace std;

//wrting our first program
// int main(){
//   int fav_number;
//   cout<<"enter your fav no. bw 1 to 100: ";
//   cin>>fav_number;
//   cout<<"amazing that's my fav number too! ";
//   cout<<"\n no really, " <<fav_number<<" is my fav number";

//basic input and output using cin and cout
//eg1
// int main(){
//   cout<<"Hello\nout\nthere";

//eg2
// int main(){
//   int num1,num2;
//   cout<<"enter your first num: ";
//   cin>>num1;
//   cout<<"enter your second num: ";
//   cin>>num2;
//   cout<<"Your num1 is "<<num1<<" and num2 is "<<num2;

//eg3
// int main(){
//   int num1;
//   float num2;

//   cout<<"enter an integer: ";
//   cin>>num1;

//   cout<<"enter your double: ";
//   cin>>num2;

//   cout<<"the number is: "<<num1<<endl;
//   cout<<"the double is: "<<num2<<endl;

//DECLARING N INITIALIZING VARIABLE
// int main(){
//   cout<<"enter the width of room: ";
//     int width{7};//declaring n initializing in case of no input
//   cin>>width;
//   cout<<"enter the length of room: ";
//    int length{1};
//   cin>>length;
//   cout<<"the are of room is : "<<width*length<<" square feet";

  // BUILD IN PRIMITIVE DATA TYPES

// **********************************************************
// character type
// **********************************************************

// // **********************************************************
// // integer type
// // **********************************************************
// long people_in_florida {24345454};
// cout<<people_in_florida<<endl;

// long long people_on_earth {34398479287482};
// cout<<people_on_earth<<endl;

// // **********************************************************
// // float type
// // **********************************************************
// double pi{3.14159};
// cout<<pi<<endl<<endl;//for gap bw lines

// long double large_amount{2.7e120832389273};
// cout<<large_amount<<endl;

// // **********************************************************
// // overflow example
// // **********************************************************
// short value1 {2327};
// short value2 {1000};
// short product {value1*value2};
// cout<<product;//(negative number)coz multiplying it make it a long num

// //section 06 challenge
// int main(){
// // (FRANK'S CARPET CLEANING SERVICE CHARGES)
// int small_rooms;
// int large_rooms {0};
// const int price_small_room {25};
// const int price_large_room {35};
// const double tax {0.06};
// int days {30};
// cout<<"hello wlcme to frank carpet cleaning service!"<<endl<<endl;
// cout<<"how many small rooms would you like to be cleaned?  ";
// cin>>small_rooms;
// cout<<"how many large rooms would you like to be cleaned? ";
// cin>>large_rooms;
// cout<<endl;
// cout<<"Estimate for carpet cleaning services:"<<endl;
// cout<<"no of small rooms : "<<small_rooms<<endl;
// cout<<"no of large rooms : "<<large_rooms<<endl;
// cout<<"price per small room : $"<<price_small_room<<endl;
// cout<<"price per large room : $"<<price_large_room<<endl;
// int total {(small_rooms*price_small_room)+(large_rooms*price_large_room)};
// cout<<"cost : "<<total<<endl;
// cout<<"tax : "<<total*tax<<endl;
// cout<<"========================================="<<endl;
// cout<<"total estimate : "<<total+(total*tax)<<endl;
// cout<<"this estimate is valid for "<<days<<"days"<<endl<<endl;
// return 0;
// };

//section -06 challenge(GPT)
// Project: Personal Finance Tracker – Core Engine (v1)

// int main() {
    
//     // Variables
//     double monthly_income = 0.0;
//     double rent = 0.0;
//     double groceries = 0.0;
//     double travel = 0.0;
//     double utilities = 0.0;
//     double other_expenses = 0.0;

//     // Constants
//     const double GROCERIES_BUDGET_LIMIT = 5000.0;
//     const double INFLATION_RATE = 0.06;        // 6% annual inflation
//     const int SAVING_MONTHS = 12;

//     // INPUT
//     cout << "Enter your monthly income (₹): ";
//     cin >> monthly_income;

//     cout << "Enter expense for Rent (₹): ";
//     cin >> rent;

//     cout << "Enter expense for Groceries (₹): ";
//     cin >> groceries;

//     cout << "Enter expense for Travel (₹): ";
//     cin >> travel;

//     cout << "Enter expense for Utilities (₹): ";
//     cin >> utilities;

//     cout << "Enter other expenses (₹): ";
//     cin >> other_expenses;

//     // Calculations
//     double total_expenses = rent + groceries + travel + utilities + other_expenses;
//     double remaining_balance = monthly_income - total_expenses;
//     double savings_rate = (monthly_income > 0) ? ((remaining_balance / monthly_income) * 100.0) : 0.0;

//     double monthly_saving_target = 25000.0;                    // example target
//     double inflation_adjusted_goal = monthly_saving_target * (1 + INFLATION_RATE);

//     // OUTPUT 
//     cout << "\n=== Monthly Finance Summary ===\n";
//     cout << "Total Income          : ₹" << monthly_income << endl;
//     cout << "Total Expenses        : ₹" << total_expenses << endl;
//     cout << "Remaining Balance     : ₹" << remaining_balance << endl;
//     cout << "Savings Rate          : " << savings_rate << "%\n\n";

//     cout << "Category Breakdown:\n";
//     cout << "- Rent        : ₹" << rent << endl;
//     cout << "- Groceries   : ₹" << groceries;
    
//     if (groceries > GROCERIES_BUDGET_LIMIT) {
//         cout << " (Over budget by ₹" << (groceries - GROCERIES_BUDGET_LIMIT) << ")";
//     } else {
//         cout << " (Under budget by ₹" << (GROCERIES_BUDGET_LIMIT - groceries) << ")";
//     }
//     cout << endl;

//     cout << "- Travel      : ₹" << travel << endl;
//     cout << "- Utilities   : ₹" << utilities << endl;
//     cout << "- Others      : ₹" << other_expenses << endl;

//     cout << "\nMonthly Savings Target : ₹" << monthly_saving_target << endl;
//     cout << "Inflation-adjusted goal (6%): ₹" << inflation_adjusted_goal << endl;

//     if (remaining_balance < 0) {
//         cout << "\nWARNING: You are overspending this month!\n";
//     }

//     return 0;
// }

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

// // LOOPS (FOR / WHILE)
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

// //ARITHMETIC OPERATOR 
// // int num1{100};
// // int num2{200};
// // cout<<num2%num1;

// //INCR/DECR OPERATOR
// int counter = 10;
// int result = 0;
// result = counter++ + 10;
// //iss wale me phele ye uppar wali equation solve hogi fir 
// // neeche baadme counter = 11 hojayega
// cout<<result;

//FUNCTIONS
// int sum(int a , int b){
//   return a+b;
// }
// int main(){
//   int X,Y,result;
//   cin>>X>>Y;
//   result = sum(X,Y);
// cout<<endl<<result;
// char middle_initial{'T'};
// cout<<"the middle initial is "<<middle_initial<<endl;
//    return 0;
// }

// MIXED EXPRESSIONS AND CONVERSIONS
// int main(){
//   int num1 {},num2 {},num3{};
//   int total;
//   const int count {3};
//   cout<<"enter 3 int seperated by spaces";
//   cin>>num1>>num2>>num3;
//   total = num1+num2+num3;
//   double average{0.0};
//   average =static_cast<double> (total) / count;
//   // average = (double)total/count; //OLD STYLE
  
//   cout<<"the 3 numbers were"<<num1<<" "<<num2<<" "<<num3<<endl;
//   cout<<"the sum of the number is "<<total<<endl;
//   cout<<"the average of numbers is"<<average<<endl;
// }

//TESTING FOR EQUALITY
// int main(){
//   bool equal_num;
//   bool notequal_num;
//   int num1{},num2{};
//   cout<<boolalpha;
//   cout<<"enter 2 digit numbers seperated by space";
//   cin>>num1>>num2;
//   equal_num= num1==num2;
//   notequal_num= num1!=num2;
//   cout<<"comparison result (equals) "<<equal_num<<endl;
//   cout<<"comparison result (not equal) "<<notequal_num<<endl;
//   return 0;
// }
//GOOD QUESTION
// Coding Exercise 9: 
// Logical Operators and Operator Precedence - Can you work?
// In order for the individual to be eligible, they must be 18
// years of age or older, or be above the age of  15  and
// have their parents consent to work. Additionally they must 
// possess a valid social security number and have no driving accidents.

// Let the variable age  represent the individual's age,
// and the boolean variables parental_consent  represent
// parental consent, ssn  represent a valid social security
// number, and accidents   represent whether they have had
// any car accidents.

//SECTION CHALLENGE-08
// int main(){
//   int cents;
//   cout<<"enter an amount in cents : ";
//   cin>>cents;
//   cout<<"you can provide change for this as follows: "<<endl;
//   int dollars{100};
//   int quarter{25};
//   int dime{10};
//   int nickles{5};
//   int penny{1};

//   dollars = cents/100;
//   cout<<"dollars : "<<dollars<<endl;
//   cents = cents-(dollars*cents);

//   quarter= cents/25;
//   cout<<"quarter : "<<quarter<<endl;
//   cents = cents -(cents*quarter);

//   dime = cents/10;
//   cout<<"dime : "<<dime<<endl;
//   cents= cents - (cents*dime);
  
//   nickles = cents/5;
//   cout<<"nickles : "<<nickles<<endl;
//   cents = cents- (cents*nickles);

//   penny = cents;
//   cout<<"penny : "<<penny<<endl;
//   return 0;
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
// Given a vector of integers, determine how many integers are present before you see the value -99 . Note, it's possible -99  is not in the vector! If -99  is not in the vector then the result will be equal to the number of elements in the vector.

// The final result should be stored in an integer variable named count .

// Note that you the different vectors will be tested against your code. You do not need to declare the vector of integers. vec  is the name of the vector you should use.

// You can find my solution by clicking on the solution.txt file on the left pane. But please make sure you give it a go yourself first, and only check the solution if you really get stuck.

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

  // SECTION - 09 :
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
  //   // if flase: theen the last 2 statements

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

//section 10 : string

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
int main(){
  string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
  string key{"XHIDHASFASOAHASODHASOIDHASIOHIAOSSAODAHDAIODHIASDHIS"};
  string secret_message{};
  cout<<"enter your secret message: ";

  getline(cin,secret_message);

  string encrypted_message{};
  for(auto c: secret_message){
    size_t position = alphabet.find(c);
    cout<<position;
    if(position !=string::npos){
      char new_char {key.at(position)};
      encrypted_message+=new_char;
    }
    else{
      encrypted_message+=c;
    }
  }
  cout<<encrypted_message;
  return 0;
}

// SECTION 11

// WHAT IS FUNCTION
// int main(){
//   int random_num{};
//   size_t count{10};
//   int min{1};
//   int max{6};

//   //random number generator
//   srand(time(nullptr));
//   cout<<RAND_MAX;
//   for(size_t i{1};i<=count;i++){
//   //generate a random number from [min,max]
//     random_num = rand()%max+min;
//     cout<<random_num<<endl;
//   }
//   return 0;
// }

// FUNCTION PROTOTYPE
// double area_calc_circle(double);
// void area_circle();

// double vol_calc_cylinder(double ,double);
// void volume_cylinder();

// //CALLING FUNCTION
// int main(){
//   volume_cylinder();
//   area_circle();
// }

// // FUNCTION DEFINITION
// // ILL 1 : volume of cylinder
// double vol_calc_cylinder(double radius,double height){
//     const double pi{3.141};
//   return pi*radius*radius*height;
// }
// void volume_cylinder(){
//   double radius;
//   double height;
//   cout<<"enter the radius of cylinder : ";
//   cin>>radius;
//   cout<<"enter the heiht of cylinder : ";
//   cin>>height;
//   cout<<"the volume of cylinder is "<<vol_calc_cylinder(radius,height)<<endl;
// }

// //ILL 2 : area of circle
// double area_calc_circle(double radius){
//   const double pi{3.141};
//   return pi*radius*radius;
// }
// void area_circle(){
//   double radius;
//   cout<<"enter the radius of circle : ";
//   cin>>radius;

//   cout<<"the area of circle is : "<<area_calc_circle(radius);
// }

// DEFAULT ARGUMENT VALUES
// void greetings(string name , string prefix = "Mr." , string suffix = "");
// void greetings(string name , string prefix , string suffix){
//   cout<<"hello "+prefix+" "+name+" "+suffix<<endl;
// }
// int main(){
//   greetings("sahaj","Dr.","Msc");
//   greetings("krishna");
//   greetings("khushi","miss");
// }

//PASSING ARRAYS TO FUNCTION
//1.function prototype
// void print_array(int array[],size_t size);
// void set_array(int array[],size_t size,int value); 
// //2.function calling 
// int main(){
//   int my_scores[]{100,98,93,23};
//   print_array(my_scores,4);
//   cout<<endl;
//   set_array(my_scores,4,10);
// }
// //3.function declaration
// void print_array(int array[],size_t size){
//   for(size_t i{0};i<size;i++){
//     cout<<array[i]<<" ";
//   }
// }
// void set_array(int array[],size_t size,int value){
//   for(size_t i{0};i<size;i++){
//     array[i] = value;
//     cout<<array[i]<<" ";
//   }
// }

// PASS BY REFERENCE
// ILL 1 , 2
//1)function prototyping :
// void pbr1(int &num);
// void pbr2(vector <string> &v);

// void print_vector(vector <string> v){
//   for(auto s:v){
//     cout<<s<< " ";
//   }
//   cout<<endl;
// }
// // 2)function calling :
// int main(){
//   int num{10};
//   cout<<"value of num before pass by ref : "<<num<<endl;
//   pbr1(num);
//   cout<<"value of num after pass by ref : "<<num<<endl;

//   vector <string> v{"sahaj","teju","babypie"};
//   cout<<"value of vector before pass by ref : ";
//   print_vector(v);
//   pbr2(v);
//   cout<<"value of vector after pass by ref : ";
//   print_vector(v);
// }
// //3)function declaration
// void pbr1(int &num){
//   num = 1000;
// }
// void pbr2(vector <string> &v){
//   v.clear();
// }

//unit 4
//FUNCTIONS QUESTIONS COLLEGE :
//1) WAP TO ADD 3 INTEGERS USING FUNCTIONS
// int sum_calc(int a,int b);

// int main(){
//   int a;
//   int b;
//   cout<<"enter your first number : ";
//   cin>>a;
//   cout<<"enter your second number : ";
//   cin>>b;
//   cout<<"sum of 2 digit number : "<<sum_calc(a,b);
// }

// int sum_calc(int a, int b){
//   return a+b;
// }

//2) WAP using function that compares two numbers
// int comp(int a , int b);
// int main(){
//   int a,b;
//   cout<<"enter your first num : ";
//   cin>>a;
//   cout<<"enter your second num : ";
//   cin>>b;
//   comp(a,b);
// }

// int comp(int a,int b){
//   if(a>b){
//     cout<<"a is greater than b";
//   }
//   else{
//     cout<<"b is greater than a";
//   }
// }

//unit 5 
// STRINGS QUESTIONS COLLEGE
// 1)display an entire line entered by the user
// int main(){
// char word[100]{};
// cout<<"Enter a word mf :";
// cin.getline(word,100);
// cout<<"you entered : "<<word;
// }

//2)program to print the string using range based for loop
// int main(){
// string str{"welcome home"};
// string str2[10]{"hello"};
// // for(char c:str){
// //   cout<<c;
// // }
// // return 0;
// // strcmp(str,str2); ERROR funct for c style string not for c++ string !
// }

//SECTION - 12 : POINTERS 

// int main(){
//   // 1)declaring pointers
//   int * int_ptr;
//   double*int_double;

//   // 2)initializing pointers
//   double*double_ptr{nullptr};
// }

//accessing the pointer address nd storing address in a pointer 
// int main(){
//   int num{10};
//   cout<<"value of num is : " <<num <<endl; // value
//   cout<<"size of num is : "<<sizeof num<<endl;// shows bytes of int
//   cout<<"address of num is : "<<&num<<endl;//garbage_address of num

//   int *p;
//   cout<<"value of p is : " <<p <<endl; // garbage
//   cout<<"size of p is : "<<sizeof p<<endl;// shows bytes of int
//   cout<<"address of p is : "<<&p<<endl;//garbage_address of p

//   p = nullptr;
//   //nullptr = pointing nowhere!
//   cout<<"num of p : "<<p<<endl;
// }

//Dereferencing a pointer
//ill - 01
// int main(){
//   string name{"frank"};
//   string *string_ptr{&name};
//   cout<<string_ptr<<endl;
//   name = "james";
//   cout<<string_ptr<<endl;
// }

// Dynamic memory allocation 
// ill-01:
// int main(){
//   size_t size{0};
//   double *temp_ptr{nullptr};
//   cout<<"how many temps ? ";
//   temp_ptr = new double[size];
//   cout<<temp_ptr<<endl;
//   delete[]temp_ptr;//always use delete at alst to freeze 
//   //allocated memory to prevent from MEMORY LEAK
// }

//Relationship bwtween arrays and pointers 
// int main(){
//   // ill - 01:
//   // int scores[]{100,95,90};
//   // int *score_ptr{scores};//this is a pointer pointing towards scores !

//   // //score_ptr can be interchangibly used with score 
//   // cout<<score_ptr[0]<<endl;
//   // cout<<score_ptr[1]<<endl;
//   // cout<<score_ptr[2]<<endl;

//   // ill-02:
//   int scores[]{100,95,90};
//   cout<<"value of scores :"<<scores<<endl;
//   int *scores_ptr{scores};
//   cout<<"value of score_ptr :"<<scores_ptr<<endl;
// //both of em willl display the same value 

// //array subscript notation :(general notation [like how we
// //  do it geerally])
// cout<<scores[0]<<endl;
// cout<<scores[1]<<endl;
// cout<<scores[2]<<endl;

// //pointer subscript notation :
// cout<<scores_ptr[0]<<endl;
// cout<<scores_ptr[1]<<endl;
// cout<<scores_ptr[2]<<endl;

// //array offset notation :
// cout<<*scores<<endl; // 1000 allocated location
// cout<<*(scores+1)<<endl;//(+1 = indicates 
// // [1000 + 1(pointing to int scores wala int) 
// // = manje 4 == 1004 allocated location])
// cout<<*(scores+2)<<endl; //similiarly = 1008

// //pointer offset notation : (same here just the difference is 
// // of int wali value int score ki jagah int sore_ptr se lega )
// cout<<*scores_ptr<<endl;
// cout<<*(scores_ptr+1)<<endl;
// cout<<*(scores_ptr+2)<<endl;
// }

//pointers arithmetic
// int main(){
//   int scores[]{100,95,89,65,-1};
//   int *score_ptr = scores;
//   //dereferencing and incrementation in diff line of code :
//   while(*score_ptr!=-1){
//     cout<<*score_ptr<<endl;
//     *score_ptr++;
//   }
//   cout<<"\n";

//   //dereferencing and incrementation in same line of code :
//   while(*score_ptr!=-1){
//     cout<<*score_ptr++<<endl;
//   }
// }

//passing pointers to function :
// ill - 01 :
  // void swap(int *a , int *b){
  //   int temp = *a;
  //   *a=*b;
  //   *b=temp;
  // }

  // int main(){
  //   int x{100},y{300};
  //   cout<<"x :"<<x<<endl;
  //   cout<<"y :"<<y<<endl;

  //   swap(&x,&y);

  //   cout<<"x :"<<x<<endl;
  //   cout<<"y :"<<y<<endl;
  // }

  // ill - 02 :
  // void display(vector <int> *vec){
  //   for(auto str : *vec){
  //     cout<<str<<" ";
  //   }
  // }
  
  // int main(){
  //   vector <int> vec{100,28,373773};
  //   display(&vec);
  // }

  //ill - 03 : 
  // void display(int *arr,int sentinel){
  //   while(*arr!=sentinel){
  //     cout<<* arr++<<" ";
  //   }
  // } 
  // int main(){
  //   int scores[]{100,282,373,929,-1};
  //   display(scores,929);
  // }

  //section - 20 : STL 
  // # 1/06/26

  // introduction to iterators 
  // #include <set>
  // #include <map>
  // #include <list>

  // //illustration -01 :
  // void test_case1(){
  //   vector<int>vec {1,2,3,4,5};
  //   auto it = vec.begin();
  //    cout<<*it<<endl;

  //    it++;
  //    cout<<*it<<endl;

  //    it+=2;
  //    cout<<*it<<endl;

  //    it=vec.end()-1;
  //    cout<<*it<<endl;
  // }

  // //illustration -02 :
  // void test_case2(){
  //   vector <int> vec2 {1,2,3,4,5};
  //   vector <int>::const_iterator it2 = vec2.begin();
  //   // auto it2 = vec2.cbegin(); //OR

  //   while (it2!=vec2.end())
  //   {
  //     cout<<*it2<<endl;
  //     it2++;
  //   }
  // }

  // //illustration -03 :
  // void test_case3(){
  //   vector <int> vec3 {1,2,3,4,5};
  //   auto it3 = vec3.rbegin();
  //   while(it3!=vec3.rend()){
  //     cout<<*it3<<endl;
  //     it3++;
  //   }

  //   list<string>name {"larry","moe","curly"};
  //   // vector <string>::const_reverse_iterator it4 = name.begin();
  //   auto it4 = name.crbegin();
  //   cout<<*it4<<endl;
    
  //   it4++;
  //   cout<<*it4<<endl;

  //   map<string,string> fav {{"frank","cpp"},{"sahaj","engg"},{"teju","doctor"}};
  //   auto it5 = fav.begin();
  //   while(it5!=fav.end()){
  //     cout<<it5->first<<" "<<it5->second<<endl;
  //     it5++;
  //   }
  // }

  // int main(){
  //   test_case1();
  //   cout<<"-----------------------------------------"<<endl;
  //   test_case2();
  //   cout<<"-----------------------------------------"<<endl;
  //   test_case3();
  // }