#include <iostream>

using namespace std;

int main()
{
    cout << "Which coffee will you be having?" << endl;
    string q1;
    getline(cin,q1);

    cout<<"Enter your balance: " <<endl;
    double balance ;
    cin>>balance;

    if (q1=="yes"&& balance>=cP){
        cout<<"here is your coffee"<<endl;
        cout<<"New balance: "<< balance-cP<<endl;
    }
    else if (q1=="yes"&&balance<cP){
        cout<<"you don't have enough money, sorry about that"<<endl;
    }
    else{
        cout<<"Have a good day!"<<endl;
    }
    return 0;
}
