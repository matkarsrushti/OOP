
//Exception Handling

#include<iostream>
using namespace std;
int main(){
int a,b,c;

    cout<<"Enter two integer values: "<<endl;
    cin>>a>>b;
    try
    {
        if(b==0)
        throw b;
        c= a/b;
        cout<<"The div\t"<<c;
    }
     catch(int x)

     {
        cout<<"\nDivision by zero is not permitted"<<endl;
        cout<<"The error is division by\t"<<x;
     }
    cout<<endl<<"At the end of main function ";
    return 0;
}

