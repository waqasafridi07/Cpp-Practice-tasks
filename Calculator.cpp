#include <iostream>
using namespace std;
int main(){
    float n1,n2;
    cout<<"Enter first number : ";
    cin>>n1;

    cout<<"Enter second number : ";
    cin>>n2;

    cout<<"Press + for addition"<<endl;
     cout<<"Press - for subtraction"<<endl;
      cout<<"Press * for multiplication"<<endl;
       cout<<"Press / for division"<<endl;
       

       char x;
       cin>>x;

       if (x=='+'){
        cout<<n1+n2<<endl;
       }

       else if(x=='-'){
        cout<<n1-n2<<endl;
       }

       else if(x=='*'){
        if(n1==0 || n2==0){
            cout<<"0"<<endl;
        } else{
            cout<<n1*n2<<endl;
        }
       }
        else if (x=='/'){
            if (n2==0){
                cout<<"0"<<endl;
            } else{
                cout<<"n1/n2"<<endl;
            }
        }
        else{
            cout<<"invalid operation";
        }
}