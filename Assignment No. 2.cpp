

//Sum of first 50 even numbers

#include<iostream>
using namespace std;
int main(){
 int sumeven = 0;
 for(int i=0;i<50; i++)
 { 
 if(i % 2 == 0)
  { 
  sumeven += i; 
  }
 } 
 cout<<"Sum of first 50 even numbers is "<<sumeven;
 return 0;
}
