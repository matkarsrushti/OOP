//Pascal triangle

#include <iostream>
using namespace std;
int fact (int n)
{
    int i;
    int res= 1;
    for (int i=n; i>1; i--)
    {
        res *=i;  
    }
    return res;
}
int BinoCoef(int a, int b)
{
    return(fact (a)/(fact(b)*fact(a-b)));}
    void printPascal(int l)
    {
        for (int i=0; i<l; i++)
        {
            for (int j=0; j<=i; j++)
            {
                cout<<"\t"<< BinoCoef(i,j); }
               cout<<endl;
           
            }
        }

int main()
{
    cout<<"\n Enter no. of rows of triangle: ";
    int r;
    cin>>r;
    printPascal(r);
    return 0;
}

