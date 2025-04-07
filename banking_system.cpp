#include <iostream>
#include<string>
using namespace std;

class account{
    string customer_name;
    int account_number;
    string account_type;
    public:
    account(){
        return;
    }
    account(string c,int a,string at){
        customer_name=c;
        account_number=a;
        account_type=at;
    }
};

class current_account:public account{
    private:
    float balance;
    float penalty;
    float min_balance;
    public:
    current_account(){
        balance=0;
        penalty=20;
        min_balance=500;
    }
    void current_deposit(float m){
        balance=balance+m;
    }
    void current_balance(){
        cout<<"Balance remaining : "<<balance<<endl;
    }
    void check_min_balance(){
        if (balance<min_balance){
            cout<<"service charge of Rs.20 is imposed"<<endl;
            balance=balance-20;
            cout<<"balance now : "<<balance<<endl;
        }
    }
};

class saving_account:public account{
    float s_balance;
    float rate;
    float i;
    public:
    saving_account(){
        s_balance=0;
        rate=5;
    }
    void saving_deposit(float a){
        s_balance+=a;
    }
    void saving_balance(){
        cout<<"Balance remaining : "<<s_balance<<endl;
    }
    void interest(){
        i=(s_balance*rate)/100;
        cout<<endl<<"Interest = "<<i<<endl;
        s_balance+=i;
        cout<<endl<<"After interest, balance : "<<s_balance<<endl;
    }
    void withdrawal(float b){
        if (b>s_balance){
            cout<<"not enough balance"<<endl;
        }
        s_balance-=b;
        cout<<endl<<"after withdrawal, balance remaining : "<<s_balance<<endl;
    }
};

int main(){
    account a1("Ram",2100254125,"current");
    account a2("Raju",2541000522,"saving");

    current_account c;
    saving_account s;

    cout<<endl<<"For current account : "<<endl;
    c.current_deposit(1000);
    c.current_balance();
    c.check_min_balance();
    
    cout<<endl<<"For savings account : "<<endl;
    s.saving_deposit(2000);
    s.saving_balance();
    s.interest();
    s.withdrawal(200);    
}