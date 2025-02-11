#include <iostream>
using namespace std;
int main(){
    int a,b,c,x;
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin>>b;
    cout<<"Enter the value of c : ";
    cin>>c;
    cout<<"Enter the value of x : ";
    cin>>x;

    if (x<=0){
        cout<<"No solution, x must be greater than zero"<<endl;
    }
    else if(x>1){
        cout<<x/x;
    }

    float ab = a* (x + (b/ 2*a));
    float absquare = ab*ab;

    float result =  (a*absquare) - (((b*b )- (4*a*c))/4*a);
    cout<<"Result = "<< result;
}