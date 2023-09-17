#include <iostream>
using namespace std;
int main()
{
    //Maham Imran 22I-2733
    int u = 0, t = 0, a = 0;
    double s = 0;
    cout<<"Input initial velocity, time and acceleration to calculate distance"<<endl;
    cin>>u>>t>>a;
    s = u * t + 0.5 * a * t * t;
    cout<<"The distance is "<<s<<endl;
    
}
