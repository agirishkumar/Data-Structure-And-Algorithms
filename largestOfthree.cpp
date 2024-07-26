#include<iostream>
using namespace std;

int main(){

    int a,b,c;

    cout << "enter the three integers space seperated: ";
    cin >> a >> b >> c;

    int largest = (a>b)?((a>c)? a:c):((b>c)?b:c);

    cout << "largest number is: "<< largest;

    return 0;

}
