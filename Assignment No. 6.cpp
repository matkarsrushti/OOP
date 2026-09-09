#include<iostream>
using namespace std;
class complex 
{int real,img;
    public:
    void accept(float a, float b)
    {
        real=a;
    img=b;
    }
    void display()
   { 
       cout<<real<<"+i"<<img;
       
   }
   complex operator+(complex c)
   {
       complex sum;
       sum.real= real + c.real;
       sum.img= img + c.img;
       return sum;
   };
       complex operator-(complex c) {
       complex dif;
       dif.real= real - c.real;
       dif.img= img - c.img;
       return dif;
   };
    complex operator*(complex c){
       complex result; 
     result.real= real*c.real- img*c.img;
      result.img = (real * c.img) + (img * c.real);
       return result;
   };
   complex operator/(complex c){
       complex result; 
       result.real= (result.real= real) * (c.real + img * c.img);
        result.real= (result.real= real) - (c.real + img * c.img);
       
       return result;
   };
   };

int main()
{
    complex c1,c2,c3, c4,c5, c6;
    c1.accept (3,2);
    c2.accept(5,8);
      cout<<"c1=\t";
    c1.display();
    cout<<"\nc2=\t";
    c2.display();
    c3= c1+ c2;
    cout<<"\nAddition= ";
    c3.display();

    c4= c1 - c2;
    cout<<"\nSubtraction= ";
    c4.display();

    c5= c1 * c2;
    cout<<"\nMultiplication= ";
    c5.display();
    
    c6= c1 / c2;
    cout<<"\nDivision= ";
    c6.display();
return 0;

}


