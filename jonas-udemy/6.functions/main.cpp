#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>//for c style string functions
#include <cctype>//for character based functions
#include <cstdlib>//required for rand()
#include <ctime>//required for time()
using namespace std;

//FUNCTIONS
// int sum(int a , int b){
//   return a+b;
// }
// int main(){
//   int X,Y,result;// IMPORTANT
//   cin>>X>>Y;
//   result = sum(X,Y);
// cout<<endl<<result;
// char middle_initial{'T'};
// cout<<"the middle initial is "<<middle_initial<<endl;
//    return 0;
// }
// SECTION 11
//FUNCTION 

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