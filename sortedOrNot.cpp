//check whether the given array is sorted or not using Recursion

#include <iostream>
using namespace std;

bool isSorted(int *arr, int size) {
    
    //base case
      if(size==0 || size==1)  return true;
     
     //processing 
      if(arr[0] > arr[1]) return false;
      
     //recurrence relation
      else {
          int result = isSorted(arr+1 , size-1);
          return result;
      }
}

int main() {

  int arr[] = {2,4,9,9,9};
  int size = 5;
  bool ans = isSorted(arr,size);
  
  if(ans) {
      cout<<" array is sorted" <<" ";
  }else {
      cout<<" array is npot sorted"<<" ";
  }
  return 0;
}
