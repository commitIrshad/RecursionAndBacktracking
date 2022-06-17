// linear search using recursion


#include <iostream>
using namespace std;

bool linearSearch(int *arr, int size , int key) {
    
    //base case
      if(size==0)  return false;
     
     
     //processing 
       if(key == arr[0]) return true;
      
     //recurrence relation
         else {
             int result = linearSearch(arr+1 , size-1 , key);
          return result;
        } 
}

int main() {

  int arr[] = {3,5,1,2,6};
  int size = 5;
  int key = 8;
  bool ans = linearSearch(arr,size,key);
  
  if(ans) {
      cout<<" found" <<" ";
  }else {
      cout<<"not found"<<" ";
  }
  return 0;
}
