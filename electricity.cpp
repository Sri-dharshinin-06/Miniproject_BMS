#include<iostream>
using namespace std;
class Electricity{
    string c_name;
    int units;
    float fixed_charge;
    float t_amt;
    public:
    void getData(){
        cout<<"Enter customer name: ";
        cin>>c_name;
        cout<<"Enter units consumed: ";
        cin>>units;
    }
    void display(){
        cout<<"Customer name: "<<c_name<<"\n";
        cout<<"Units consumed: "<<units<<"\n";
        if(units<=100){
            fixed_charge=50;
            t_amt=units*0.5+fixed_charge;
        }
        else {
            fixed_charge=100;
            t_amt=units*0.75+fixed_charge;
        }
        cout<<"Total amount: "<<t_amt<<"\n";
    }
};
int main(){
    Electricity e;
    e.getData();
    e.display();
    return 0;
}