// implementation of binary Search using RECURSION

#include<iostream>
using namespace std;

void print(int arr[], int start, int end) {
    for(int i=start; i<=end; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
 bool binarySearch(int arr[], int start, int end, int key) {

     print(arr,start,end);
     //base case
     if(start>end) return 0;    // IF THE ELEMNT NOT FOUND
     
     int mid = (start + end) / 2;
     cout<<"mid is = "<<mid<<endl;
     if(arr[mid]==key) return 1;  // IF ELEMENT FOUND
     
     //recurrence relation
     
     if(arr[mid] < key) {
         binarySearch(arr, mid+1, end, key);   // GO TO THE RIGHT HALF
     }
     else{
         binarySearch(arr,start,mid-1,key);    // GO TO THE LEFT HALF
     }
     
 }
int main() {
    
    int arr[] = {2,4,6,10,14,18};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 18;
    int start = 0;
    int end = size-1;
    
    bool result = binarySearch(arr, start,end,key);
    
    if(result) {
        cout<<"found the key element";
    }
    else{
        cout<<"not found";
    }
    return 0;
}
