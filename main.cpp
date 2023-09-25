#include <iostream>

using namespace std;

class employee{
private:
    int employeeNumber;
    float employeeCompensation;

public:
    void enterData(){
        cout<<"\nEnter employee number: "; cin>>employeeNumber;
        cout<<"\nEnter employee compensation: ";cin>>employeeCompensation;
    }
    void showData() const{
        cout<<"\nEmployee number is: "<< employeeNumber;
        cout<<"\nCompensation is;"<<employeeCompensation;
    }
};

int main(){
    employee e1,e2,e3;
    e1.enterData();
    e1.showData();
    e1.enterData();
    e1.showData();
}