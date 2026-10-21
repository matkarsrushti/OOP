#include<iostream>
#include<string>
using namespace std;
class basicInfo
{
    protected:
    string name;
    string address;
    int age;
    public:
    void acceptbasicInfo()
    {
        cout<<"\nEnter name:";
        cin>>name;
        cout<<"\nEnter address:";
        cin>>address;
        cout<<"\nEnter age:";
        cin>>age; 
    }
    void displaybasicInfo()

    {
        cout<<"\nName: "<<name;
        cout<<"\nAddress: "<<address;
        cout<<"\nAge: "<<age; 
    }
};

class deptInfo
{
    protected:
    string namedept;
    string naturework;
    public:
    void acceptdeptInfo()
     {
        cout<<"\nEnter Department: ";
        cin>>namedept;
        cout<<"\nEnter nature of work: ";
        cin>> naturework;
    }
    void displaydeptInfo()

    {
        cout<<"\nDepartment: "<<namedept;
        cout<<"\nNature of work: "<<naturework;
    }
};
    class employee: public basicInfo, public deptInfo
{
    int emp_id;
    double salary;
 public:
    void acceptemployee()
{
    cout<<"\nEnter emp_id: ";
    cin>>emp_id;
    cout<<"\nEnter Salary: ";
    cin>>salary;
}
void displayemployee()
{
    cout<<"\nEmp_id: "<<emp_id;
    cout<<"\nSalary: "<<salary;
}
};
    
int main(){
    cout<<"\n      Employee 1 Details";
    employee emp1, emp2;
    emp1.acceptbasicInfo();
    emp1.acceptdeptInfo();
    emp1.acceptemployee();
    emp1.displaybasicInfo();
    emp1.displaydeptInfo();
    emp1.displayemployee();
cout<<"\n_______________________________________________________";
    cout<<"\n      Employee 2 Details";
    emp2.acceptbasicInfo();
    emp2.acceptdeptInfo();
    emp2.acceptemployee();
    emp2.displaybasicInfo();
    emp2.displaydeptInfo();
    emp2.displayemployee();

    return 0;
}


