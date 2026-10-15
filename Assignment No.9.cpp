

//Run-time Polymorphism

#include<iostream>
using namespace std;
class shape
{
    public:
    virtual void Draw()
    {
        cout<<"\n Drawing shape";
    }
};
class Circle: public shape
{
    public:
    void Draw()
    {
        cout<<"\n Drawing circle";
    }
};
int main()
{
    Circle c1; shape s1;
    shape* str = &c1;
    str->Draw();  //Derived class   
    s1.Draw();
    c1.Draw();
    return 0;
}
