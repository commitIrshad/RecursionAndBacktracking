// Online C++ compiler to run C++ program online

// reversing given STRING using recursion


// we can do it with single pointer as well
// lets take pointer " i " & " n-i-1 "
//do swaping and increament as well

#include <iostream>
using namespace std;

void reverse(string& str,int i) {
    
    cout<<"CALL RECIEVED FOR  "<< str <<endl; 
    int n = str.length();
    // base case:
      if(i > n-i-1) return ;
      
    // processing
     swap(str[i] , str[n-i-1]);
     
     //recyrrence relation:
      reverse(str,i+1);
    
}
int main() {
    // Write C++ code here

 string str = "abcde";
 reverse(str,0);
 
 cout<<str;
    return 0;
}
