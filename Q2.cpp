#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    //Maham Imran 22I-2733
    double p, r, t, A, n;
    n=12;
    cout<<"Enter principle amount"<<endl;
    cin>>p;
    cout<<"Enter annual interest rate in percentage"<<endl;
    cin>>r;
    r = r / 100;
    cout<<"Enter investment tenure in Years"<<endl;
    cin>>t;
    A = (pow(1+r/n, n*t)) * p;
    cout<<"Your monthly compound interest is "<<A<<endl;
}
