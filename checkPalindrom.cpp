// Online C++ compiler to run C++ program online

#include <iostream>
using namespace std;

bool checkPalindrom(string& str,int i) {
    
    int n = str.length();
    // base case:
      if(i > n-i-1) return true;
      
    // pkrocessing
      if( str[i] != str[n-i-1]) return false;
      else{
           //recurrence relation:
            checkPalindrom(str,i+1);
      } 

}
int main() {
    // Write C++ code here

 string str = "jahaj";
 bool result = checkPalindrom(str,0);
 
 if(result) {
     cout<<str +" is a palindrom word";
 }
 else{
     cout<<str + " is not palindrom";
 }
 
    return 0;
}
