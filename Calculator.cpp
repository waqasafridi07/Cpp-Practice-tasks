#include <iostream>
using namespace std;
int main(){
    float n1,n2;
    cout<<"Enter first number : ";
    cin>>n1;

    cout<<"Enter second number : ";
    cin>>n2;

    cout<<"Press a for addition"<<endl;
     cout<<"Press s for subtraction"<<endl;
      cout<<"Press m for multiplication"<<endl;
       cout<<"Press d for division"<<endl;
       

       char x;
       cin>>x;

       if (x=='a'){
        cout<<n1+n2<<endl;
       }

       else if(x=='s'){
        cout<<n1-n2<<endl;
       }

       else if(x=='m'){
        if(n1==0 || n2==0){
            cout<<"Error: cannot multiply by zero!"<<endl;
        } else{
            cout<<n1*n2<<endl;
        }
       }
        else if (x=='d'){
            if (n2==0){
                cout<<"Error: cannot be divisible"<<endl;
            } else{
                cout<<"n1/n2"<<endl;
            }
        }
        else{
            cout<<"invalid operation";
        }
}