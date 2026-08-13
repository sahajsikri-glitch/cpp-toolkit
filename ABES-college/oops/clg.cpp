#include <iostream>
#include <vector>
#include <cstring>//for c style string functions
#include <cctype>//for character based functions
#include <cstdlib>//required for rand()
#include <ctime>//required for time()
#include <stack>
using namespace std;

// // coding CODECHEF QUESTION : 
// //problem - 01
// // int main(){
// //   int n;
// //   int x;
// //   cout<<"enter no of items you bought : ";
// //   cin>>n;
// //   cout<<"entere bill for each item : ";
// //   cin>>x;
// //   long long total = n * x;
// //  if (total >= 10000 && total <= 99999) {
// //         cout << "YES\n";
// //     } else {
// //         cout << "NO\n";
// //     }
// // }

// //problem - 02
// // int main(){
  
// // }

// // #27/02/26
// //selection sorting :
// int main(){
//   int a[5]{95,19,2,67,3};
//   int temp; 
//   int n=5;
//   for(int i=0;i<n-1;i++){
//     int min = i;
//     for(int j=i+1;j<n;j++){
//       if(a[j]<a[min]){
//         min = j;
//       }
//     }
//     temp =a[i];
//     a[i]=a[min];
//     a[min]=temp;
//   }
//   cout<<"sorted array by selection sort : "<<endl;
//   for(int i = 0 ;i<n;i++){
//     cout<<" "<<a[i];
//   }
// }

//reference variable 
// int main(){
//   int x=10;
//   int &refVar =x;//pointing to x
//   cout<<x<<endl;
//   cout<<refVar<<endl;
//   refVar=25;
//   cout<<x<<endl;
//   cout<<refVar;
//   return 0;
// }

//scope resolution operator(::)
// int x=10;
// int main(){
//   int x =50;
//   cout<<x<<endl;
//   cout<<::x;
//   return 0;
// }

//namespace  -:(has 2 uses)
// 1. using namespace std which allow us to not
//  to use std everytime in program
// 2.helps in accessing and declaring functions if its same
// namespace abc{
//   void display(){
//     cout<<"hello";
//   }
// };
// namespace xyz{
//   void display(){
//     cout<<"bye";
//   }
// };
// int main(){
//   abc::display();
//   xyz::display();
// }

// class student{
//   int id;
//   float cgpa;
//   char name[10];
//   char dept[5];

//   void get_Data(){
//     cout<<"enter your id: ";
//     cin>>id;
//     cout<<"enter your name: ";
//     cin>>name;
//     cout<<"enter your cgpa: ";
//     cin>>cgpa;
//     cout<<"enter your department: ";
//     cin>>dept;
//   }

//   void display_data(){
//     cout<<id;
//     cout<<name;
//     cout<<cgpa;
//     cout<<dept;
//   }
// };

//Q) write a program to show 5 diff employee information as -: 
// id name dept and monthly salary display each employee info as
// 1. anual income 2. salary after 10% deduction as tax
// 3.salary after 5& deduction in another service 

// class employees{
//   private:
//   int id;
//   char name[20];
//   float salary;
//   char dept[10];

//   public:
//   void get_info(){
//     cout<<"enter your id: ";
//     cin>>id;

//     cin.ignore();//for ignoring the leftover newline
//     cout<<"enter your department: ";
//     cin.getline(dept,10);

//     cout<<"enter your name: ";
//     cin.getline(name,20);

//     cout<<"enter your monthly salary: " ;
//     cin>>salary;
//   }
  
//   void display_info(){
//     int anual_salary = salary*12;
//     cout<<"your anual salary";
//     cout<<anual_salary<<endl;
//     cout<<"salary after 10% deduction: ";
//     int x= (anual_salary*10)/100;
//     anual_salary= anual_salary-x;
//     cout<<anual_salary<<endl;
//     cout<<"salary after 5% deduction: ";
//     int y = (anual_salary*5)/100;
//     anual_salary=anual_salary-y;
//     cout<<anual_salary<<endl;
//   }
// };

// int main(){
//   employees emp[5];
//   cout<<"enter details of 5 employees"<<endl;
//   for(int i=0;i<5;i++){
//     emp[i].get_info();
//   }

//   cout<<"employee details";
//   for(int i=0;i<5;i++){
//     emp[i].display_info();
//   }
//   return 0;
// }

// Q)wap to create 2 namespaces as fruit and rice
// both has the function name as detail() and 
// quantity available . call the quantity available function
// from rice and detail function from fruit.

// namespace fruits{
//   int detail(int price,int quality){
//     cout<<price;
//     cout<<quality;
//   }

//   int quantity_available(int quantity){
//     if(quantity>0){
//       cout<<"quantity available";
//     }
//     else{
//       cout<<"not available";
//     }
//   }
// }
// namespace rice{
//   int detail(int price,int quality){
//     cout<< price;
//     cout<< quality;
//   }

//   int quantity_available(int quantity){
//      if(quantity>0){
//       cout<<"quantity available";
//     }
//     else{
//       cout<<"not available";
//     }
//   }
// }
//   int main(){
//     //use scope resolution to call function
//     fruits::detail(2,4);
//     rice::quantity_available(100);
//   }

  //static function or variable
  // class abc{
  //   static int fruitjuicer;
  //   public:
  //   static void show(){
  //     cout<<"hello";
  //   }
  // };

  // //best use case of static :
  // class help{
  //   static int helper;
  //   int a=10;//giving default values to 10 if using static
  //   int b;
  //   int c;
  // };
  // int main(){
  //   help h1;//jo h1 hai agar usme ab hum a b c ki value de agar toh
  //   //its static toh a ki value dene par bhi vo 10 hi rahegi
  // }

  //Q)wap to create two functions calc1 and calc2
  // in calc1 - take 3 input from the user and check 
  // whether it is even posititve no or not
  // in clac2 function pass the value as a paramaeter 
  // & find the sum of 2 smallest no.

  // void calc1(int a , int b , int c){
  //   if(a%2==0){
  //     cout<<"a is positive";
  //   }
  //   else{
  //     cout<<"a is negative";
  //   }

  //   if(b%2==0){
  //     cout<<"b is positive";
  //   }
  //   else{
  //     cout<<"b is negative";
  //   }

  //   if(c%2==0){
  //     cout<<"c is positive";
  //   }
  //   else{
  //     cout<<"c is negative";
  //   }
  // }

  // int clac2(int a,int b,int c){
  //   if(a>b&&a>c){
  //     return b+c;
  //   }
  //   else if(b>a && b>c){
  //     return a+c;
  //   }
  //   else{
  //     return a+b;
  //   }
  // }

  // int main(){
  //   calc1(1,2,3);
  //   cout<<clac2(1,2,3);
  //   return 0;
  // }

//function overaloading :
// same func name different parameters or 
// same parameters with different orderes
// add(int a,int b) add(float a,float b) add(int a ,float b)

//Q) wap to show the concept of function overloading
// by calculating the area of different shapes

// Q) wap to show the concepot of func overloading for 
// calculating the salary of employees as basic +hra + da 
// and if hra and da not prvvided then assume their values as
// 5000,2000 respectively

// class salary{
//   int basic,hra,da;
//   void calculate(int a){
//     basic =a;
//     hra = 500;
//     da=200;
//     cout<<(basic+hra+da);
//   }
  
//   void calculate(int a , int b){
//     basic = a;
//     hra=b;
//     da=200;
//     cout<<(basic+hra+da);
//   }

//   void calculate(int a , int b,int c){
//     basic=a;
//     hra=b;
//     da=c;
//     cout<<(basic+hra+da);
//   }
// };

// int main(){
//   salary s;
//   int base,hra,da;
//   cout<<"base";
//   cin>>base;
//   cout<<"hra";
//   cin>>hra;
//   cout<<"da";
//   cin>>da;

//   s.calculate(base,hra);
//   s.calculate(base,hra,da);
//   s.calculate(base);

// }

//Default-arguments
// =>helps in minimizing fucntion overloading 

//wap to calculate salary of base+10%hra+2%da.if no value is provide hra as 500 da as 150
// int salary(int base,int hra=500,int da=150){
//   hra/=10;
//   da=(da*2)/100;
//   return base+hra+da;
// }
// int main(){
//   salary(5000);
//   salary(500,40,80);
// }

//Q)wap to create airline reservation system 
// which include the private data  as passanfer id nam ,
// flight no , destination , ticket fair , booking status. 
// including different public function as add passenger ,
// display passenger detail , book ticket , cancel ticket .

class reservation{
  private:
    int passengerID;
    string passengerName;
    int flightNo;
    string destination;
    float ticketFare;
    bool bookingStatus;
  public:
    void addPasseneger(){
      cout<<"add passenger id";
      cin>>passengerID;
      
      cin.ignore();
      cout<<"enter passenger name";
      getline(cin,passengerName);

      cout<<"flight number";
      cin>>flightNo;

      cin.ignore();
      cout<<"enter destination";
      getline(cin,destination);

      cout<<"enter ticket fare";
      cin>>ticketFare;

      bookingStatus=false;
    }

    void bookTicket(){
      if(bookingStatus){
        cout<<"ticket is already booked";
      }
      else{
        bookingStatus=true;
        cout<<"Ticket Booked Successfully";
      }
    }

    void cancelTicket(){
      if(bookingStatus){
        bookingStatus=false;
        cout<<"Ticket cancelled Successfully";
      }
      else{
        cout<<"not booked already";
      }
    }
    void displayPassenger(){
      cout << "\n------- Passenger Details -------\n";

        cout << "Passenger ID : " << passengerID << endl;
        cout << "Passenger Name : " << passengerName << endl;
        cout << "Flight Number : " << flightNo << endl;
        cout << "Destination : " << destination << endl;
        cout << "Ticket Fare : " << ticketFare << endl;
        if (bookingStatus)
            cout << "Booking Status : Booked\n";
        else
            cout << "Booking Status : Not Booked\n";
    }
};

int main(){
  reservation passenger;
  passenger.addPasseneger();
      passenger.bookTicket();
    passenger.displayPassenger();

    cout << "\nCancelling Ticket...\n";

    passenger.cancelTicket();
    passenger.displayPassenger();
    return 0;
}