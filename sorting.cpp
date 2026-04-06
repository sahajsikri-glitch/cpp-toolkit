#include <iostream>
using namespace std;

//1) BUBBLE SORT :

void swap(int *x,int *y){
  int temp=*x;
  *x=*y;
  *y=temp;
}
void bubblesort(int arr[],int n){
  int i,j,flag{0};
  for(i = 0 ; i <n-1;i++){
    for(j=0;j<n-1-i;j++){
      if(arr[j]>arr[j+1]){
        swap(&arr[j],&arr[j+1]);
        flag = 1;
      }
    }
    if (flag==0){
      break;
    }
    
  }
}

int main(){
  int bubarr[]{8,3,9,2};
  int i,j,n{4};
  bubblesort(bubarr,n);

  for(i = 0 ; i<n;i++){
    cout<<bubarr[i];
  }
  return 0;
}