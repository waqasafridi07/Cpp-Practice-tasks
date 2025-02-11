#include <iostream>
using namespace std;
int main(){
    float r;
    cout<<"Enter the value of radius : ";
    cin>>r;
    const float PI = 3.14159;

    float A = PI*r*r;
    cout<<"The area is:"<<A;
}