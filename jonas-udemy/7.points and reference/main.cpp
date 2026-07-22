#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>//for c style string functions
#include <cctype>//for character based functions
#include <cstdlib>//required for rand()
#include <ctime>//required for time()
using namespace std;

//SECTION - 12 : POINTERS 

// int main(){
//   // 1)declaring pointers
//   int * int_ptr;
//   double*int_double;//garbage data

//   // 2)initializing pointers
//   double*double_ptr{nullptr};//points to nowhere
// }

// accessing the pointer address nd storing address in a pointer 
// int main(){
//   int num{10};
//   cout<<"value of num is : " <<num <<endl; // value
//   cout<<"size of num is : "<<sizeof num<<endl;// shows bytes of int
//   cout<<"address of num is : "<<&num<<endl;//address of num(hexadecimal no)

//   int *p;
//   cout<<"value of p is : " <<p <<endl; // garbage(hexa)
//   cout<<"size of p is : "<<sizeof p<<endl;// shows bytes of int
//   cout<<"address of p is : "<<&p<<endl;//garbage_address of p

//   p = nullptr;
//   //nullptr = pointing nowhere!
//   cout<<"value of p : "<<p<<endl;//0 notice the difference after nullptr
// }

// // Dereferencing a pointer
// ill-01:
// int main(){
//   int score{100};
//   int *score_ptr{&score};

//   cout<<score_ptr<<endl;//address milega coz we initialize it to &score
//   cout<<*score_ptr<<endl;//dereferencing the pointer(DATA PHEKDIA)

//   cout<<"\n";

//   *score_ptr=200;//here we're not using pointer 
//   // (look above at line 1208 this is how we use the pointer NO *)
//   // that means we're accessing the data of pointer 
//   cout<<score<<endl;
//   cout<<score_ptr<<endl;
//   cout<<*score_ptr;
// }

// ill - 02
// int main(){
//   string name{"frank"};
//   string *string_ptr{&name};
//   cout<<string_ptr<<endl;
//   name = "james";
//   cout<<string_ptr<<endl;
// }

//ill-03
// int main(){
//   vector <string>stooges {"larry","moe","curly"};
//   vector <string> *vector_ptr{nullptr};

//   vector_ptr= &stooges;

//   cout<<(*vector_ptr).at(0)<<endl;
//   //it is same as stooges.at(0)

//   for(auto x:*vector_ptr){
//     cout<<x<<endl;
//   }
// }

// // Dynamic memory allocation 
// ill-01:

// int main(){
//   size_t size{0};
//   double *temp_ptr{nullptr};
//   cout<<"how many temps ? ";
//   cin>>size;
//   temp_ptr = new double[size];
//   cout<<temp_ptr<<endl;
//   delete[]temp_ptr;//always use delete at alst to freeze 
//   //allocated memory to prevent from MEMORY LEAK
// }

// Relationship bwtween arrays and pointers 
// int main(){
//   // ill - 01:
//   int scores[]{100,95,90};
//   int *score_ptr{scores};//this is a pointer pointing towards scores !

//   //score_ptr can be interchangibly used with score 
//   cout<<score_ptr[0]<<endl;
//   cout<<score_ptr[1]<<endl;
//   cout<<score_ptr[2]<<endl;

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
// // [1000 + 1(pointing to int scores wala int(4bytes)) 
// // = manje 4 == 1004 allocated location])
// cout<<*(scores+2)<<endl; //similiarly = 1008

// //pointer offset notation : (same here just the difference is 
// // of int wali value int score ki jagah int sore_ptr se lega )
// cout<<*scores_ptr<<endl;
// cout<<*(scores_ptr+1)<<endl;
// cout<<*(scores_ptr+2)<<endl;
// }

// pointers arithmetic
//ill-01
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

//ill-02:
// int main(){
//   char name[]{"frank"};
//   char *char_ptr1 {nullptr};
//   char *char_ptr2 {nullptr};

//   char_ptr1 = &name[0]; //F
//   char_ptr2 =&name[3]; //n

//   cout<<char_ptr1<<endl;
//   cout<<char_ptr2<<endl;
//   cout<<(char_ptr2-char_ptr1);
// }

// passing pointers to function :
// ill - 01 :
//   void swap(int *a , int *b){
//     int temp = *a;
//     *a=*b;
//     *b=temp;
//   }

//   int main(){
//     int x{100},y{300};
//     cout<<"x :"<<x<<endl;
//     cout<<"y :"<<y<<endl;

//     swap(&x,&y);

//     cout<<"x :"<<x<<endl;
//     cout<<"y :"<<y<<endl;
//   }

//   ill - 02 :
//   void display(vector <int> *vec){
//     for(auto str : *vec){
//       cout<<str<<" ";
//     }
//   }
  
//   int main(){
//     vector <int> vec{100,28,373773};
//     display(&vec);
//   }

//   ill - 03 : 
//   void display(int *arr,int sentinel){
//     while(*arr!=sentinel){
//       cout<<* arr++<<" ";
//     }
//   } 
//   int main(){
//     int scores[]{100,282,373,929,-1};
//     display(scores,929);
//   }