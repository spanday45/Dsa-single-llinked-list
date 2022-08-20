#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
struct Account{
    long long int Acc_no;
    string name;
    int bankbalance;
};
int main(){
    struct Account A1;
    A1.Acc_no=9807089018;
    A1.name="Sushil pandey";
    A1.bankbalance=3400;
    cout<<"Account number : "<<A1.Acc_no<<endl;
    cout<<"Your name : "<<A1.name<<endl;
    cout<<"Bank balance : "<<A1.bankbalance<<endl;

return 0;
}

