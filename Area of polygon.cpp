#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float n,s;
    cout<<"Enter number of sides : ";
    cin>>n;
    cout<<"Enter length of one side : ";
    cin>>s;

    float A = (n*s*s) / (4*tan(M_PI/n));
    cout<<"The area is:"<<A;

}