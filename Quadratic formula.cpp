#include <iostream>
using namespace std;
int main(){
    int a;
    int b;
    int c;
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin>>b;
    cout<<"Enter the value of c : ";
    cin>>c;


    float x = -b +- 1/2*(b*b-4*a*c)/2*a;
    cout<<x;

}