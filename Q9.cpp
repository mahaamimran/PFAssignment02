#include <iostream>
using namespace std;
int main()
{
    //Maham Imran 22I-2733
    int sec, s, m, h;
    cout<<"Input number of seconds: "<<endl;
    cin>>sec;
    m = sec / 60;
    s = sec % 60;
    h = m / 60;
    m = m % 60;
    
    cout<<endl;
    cout<<sec<<" seconds are "<<h<<" Hours, ";
    cout<<m<<" minutes, and ";
    cout<<s<<" seconds"<<endl;





}

