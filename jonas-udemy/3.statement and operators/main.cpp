#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>//for c style string functions
#include <cctype>//for character based functions
#include <cstdlib>//required for rand()
#include <ctime>//required for time()
using namespace std;


//SECTION - 08 :
// STATEMENTS AND OPERATORS 
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
// The static_cast operator provides a safer
//  and more explicit way to perform type conversions in C++
//  , helping improve code readability and type safety

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
