#include <iostream>
using namespace std;
int main()
{
    //Maham Imran 22I-2733
    int n1, n2, n3, n4, n5, n6, n7, n8 ,n9, n10;
    double median, mean;
    cout<<"Enter 10 numbers in sorted order"<<endl;
    cin>>n1>>n2>>n3>>n4>>n5>>n6>>n7>>n8>>n9>>n10;
    median = float((n5 + n6))/2;
    cout<<"The median of your 10 numbers is "<<median<<endl;
    mean = float((n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10))/10;
    cout<<"The mean of your 10 numbers is "<<mean<<endl;
}
