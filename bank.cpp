#include<iostream>
using namespace std;
#include<iostream>
using namespace std;
class Bank{
    public:
    string name;
    int accNo;
    float bal=0;
    void getData(){
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter account number: ";
        cin>>accNo;
    }
    void display(){
        cout<<"Name: "<<name<<"\n";
        cout<<"Account number: "<<accNo<<"\n";
        cout<<"Balance: "<<bal<<"\n";
    }
    void deposit(float amt){
        bal+=amt;
        cout<<"Amount deposited: "<<amt<<"\n";
        cout<<"Updated balance: "<<bal<<"\n";
    }
    void withdraw(float w_amt){
        if(w_amt>bal){
            cout<<"Insufficient balance\n";
        }
        else{
            bal-=w_amt;
            cout<<"Amount withdrawn: "<<w_amt<<"\n";
            cout<<"Updated balance: "<<bal<<"\n";
        }
    }
};
int main(){
    Bank b;
    float amt;
    b.getData();
    b.display();
    int choice;
    do{
        cout<<"1. Deposit\n";
    cout<<"2. Withdraw\n";
    cout<<"3. Exit\n";
    cout<<"Enter your choice: ";
    cin>>choice;
    switch(choice){
        case 1:
        cout<<"Enter amount to deposit: ";
        cin>>amt;
            b.deposit(amt);
            break;
        case 2:
            cout<<"Enter amount to withdraw: ";
            cin>>amt;
            b.withdraw(amt);
            break;
        case 3:
            cout<<"Exiting...Thank you!\n";
            break;
        default:
            cout<<"Invalid choice\n";
    }
}while(choice!=3);
    return 0;
}
