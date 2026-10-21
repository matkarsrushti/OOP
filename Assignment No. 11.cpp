#include<iostream>
using namespace std;

template<class T>
class Calculator
{
    T num1, num2;
    public: 
    Calculator(T n1, T n2)
    {
        num1= n1;
        num2= n2;
    }

T add()
    {
    return num1 + num2;
    }
 T subtract()
    {
        return num1 - num2;
    }
T multiply(){
        return num1 * num2;
    }
};
int main(){
    Calculator <int>c1(5,4);
    Calculator <double>c2(5.2,4.4);
    cout<<"\nInteger addition is\t"<<c1.add();
    cout <<"\nInteger subtraction is\t" << c1.subtract();
    cout <<"\nInteger multiplication is\t" << c1.multiply();
    cout<<"\nDouble addition is\t"<<c2.add();
    cout <<"\nDouble subtraction is\t" << c2.subtract();
    cout <<"\nDouble multiplication is\t" << c2.multiply();
    return 0;
}

