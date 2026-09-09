//Function overloading

#include <iostream>
using namespace std;

 int add(int a, int b){
 return (a+b);}
 
 int add (float a, float b, float c){
return (a+b+c);
 }
 
 float add(float k, float m){ 
     return (k+m);
     
 }
 int main(){
     
     int n1,n2;
     cout<<"Enter two numbers: ";
     cin>>n1>>n2;
     cout<<"Sum of integer= "<<add(n1,n2)<<endl;
     
     float f1,f2,f3;
     cout<<"Enter three floats: ";
     cin>>f1>>f2>>f3;
     cout<<"Sum of floats= "<<add(f1,f2,f3)<<endl;
    
    float float1, float2;
    cout<<"Enter two floats: ";
    cin>> float1>>float2;
    cout<<"Sum of two floats:"<< add(float1,float2)<<endl;
return 0;
}

