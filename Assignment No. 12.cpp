
 //use of namespace in the program
#include<iostream>
using namespace std;
namespace s1
{
  void disp()
  {
    cout<<"\n Inside namespace 1";
  }
}
namespace s2{
  int x= 100;
  int disp ()
  {
  return 10 * x;
  }
}
int main(){
  cout<<s2::disp();

    return 0;
}

