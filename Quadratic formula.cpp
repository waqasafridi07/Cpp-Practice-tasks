#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin>>b;
    cout<<"Enter the value of c : ";
    cin>>c;

    float x1, x2;

    float discriminant = b*b-4*a*c;
    if (discriminant<0){
        cout<<"No real solutions"<<endl;
    }else{
        float x1 = (-b + sqrt(discriminant))/(2*a);
        float x2 = (-b - sqrt(discriminant))/(2*a);
    }
    cout<<"X1:"<< x1 <<endl;
    cout<<"X2:"<< x2 <<endl;
}
