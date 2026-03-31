#include <iostream>
#include <vector>
#include <cstring>//for c style string functions
#include <cctype>//for character based functions
#include <cstdlib>//required for rand()
#include <ctime>//required for time()
using namespace std;

// #26/02/26  

//in-class question : BUBBLE SORT
// int main(){
//   int a[5]{45,89,19,2,10};
//   int temp;
//   int n=5;
//   for(int i=0;i<n-1;i++){
//     for(int j=0;j-n-1;j++)
// {
//   if(a[j]>a[j+1]){
//     temp = a[j];
//     a[j]=a[j+1];
//     a[j+1]=temp;
//   }
// }  }
// for(int i = 0;i<n;i++){
//   cout<<"sorted array : "<<a[i];
// }
// }

// coding CODECHEF QUESTION : 
//problem - 01
// int main(){
//   int n;
//   int x;
//   cout<<"enter no of items you bought : ";
//   cin>>n;
//   cout<<"entere bill for each item : ";
//   cin>>x;
//   long long total = n * x;
//  if (total >= 10000 && total <= 99999) {
//         cout << "YES\n";
//     } else {
//         cout << "NO\n";
//     }
// }

//problem - 02
// int main(){
  
// }

// #27/02/26
//selection sorting :
int main(){
  int a[5]{95,19,2,67,3};
  int temp; 
  int n=5;
  for(int i=0;i<n-1;i++){
    int min = i;
    for(int j=i+1;j<n;j++){
      if(a[j]<a[min]){
        min = j;
      }
    }
    temp =a[i];
    a[i]=a[min];
    a[min]=temp;
  }
  cout<<"sorted array by selection sort : "<<endl;
  for(int i = 0 ;i<n;i++){
    cout<<" "<<a[i];
  }
}