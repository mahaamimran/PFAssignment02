#include <iostream>
using namespace std;
int main()
{
    //Maham Imran 22I-2733
    double gross_pay, rate, hours;
    cout<<"Input number of hours"<<endl;
    cin>>hours;
    cout<<"Input rate per hours"<<endl;
    cin>>rate;
    gross_pay = rate * 40 + 1.5 * rate * (hours - 40);
    cout<<gross_pay<<endl;
}
