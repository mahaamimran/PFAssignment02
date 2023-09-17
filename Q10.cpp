#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    //Maham Imran 22I-2733
    int r;
    double x, sin, cos;
    cout<<"Enter angle in degrees: "<<endl;
    cin>>r;
    x = r * (M_PI/180);
    sin = x - (pow(x,3) / 6) + (pow(x,5) / 120) - (pow(x,7) / 5040) + (pow(x,9) / tgamma(9 + 1)) ;
    cout<<"sin of "<<x<<" is "<<sin<<endl;
    cos = 1 - (pow(x,2) / tgamma(2 + 1)) + (pow(x,4) / tgamma(4 + 1)) - (pow(x,6) / tgamma(6 + 1)) + (pow(x,8) / tgamma(8 + 1)) ;
    cout<<"cos of "<<x<<" is "<<floor(cos)<<endl;
               
}
