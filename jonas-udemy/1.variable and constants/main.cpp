#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>//for c style string functions
#include <cctype>//for character based functions
#include <cstdlib>//required for rand()
#include <ctime>//required for time()
using namespace std;

// wrting our first program
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

// long long int people_on_earth {34398479287482};
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
