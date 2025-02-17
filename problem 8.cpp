#include <iostream>
using namespace std;
int main(){
    int r1, r2;
    r1 = -2147483648;
    r2 = 2147483647;

    cout<<"overflowing integer : " << r1 + 1 <<endl;
    cout<<"increasing from minimum range : " << r1 + 2 <<endl;
    cout<<"Product is : " << r1 * r1 <<endl;

    cout<<"overflowing integer : " << r2 - 1 <<endl;
    cout<<"decreasing from its minimum range : " << r2 - 2 <<endl;
    cout<<"product is : " << r2 * r2 <<endl;
}