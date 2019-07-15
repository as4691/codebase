#include<iostream>
using namespace std;
class Emp
{
    void cal(int salary)
    {
        basic=0.2*salary;
        hra=0.2*basic;
        pf=(12/100)*basic;
        payment=basic+hra+pf;
    }
    void display()
    {
        cout<<"E.No"<<"E.name"<<"BP"<<"HRA"<<"PF"<<"NP"<<endl;
        cout<<emp_no<<emp<<bpay<<allowance<<pf<<payment<<endl;
    }
};

int main()
{
    int n_emp,emp_no,i;
    char emp[100];
    float bpay,allowance,pf;
    cout<<"Enter the Number of Employee:";
    cin>>n_emp;
    for(i=0;i<n_emp;i++)
    {
      cout<<"Enter the Employee Number:";
    cin>>emp_no;
    cout<<"Enter the Employee name:";
    cin>>emp;
    cout<<"Enter the Basic pay:";
    cin>>bpay;
    cout<<"Enter the HRA allowance:";
    cin>>allowance;
    cout<<"Enter the Profitability fund:";
    cin>>pf;
    }
    Emp ob;
    ob.cal(bpay,);
    ob.display();
    return 0;

}
