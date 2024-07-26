#include<iostream>

using namespace std;

int main(){
    cout << "enter a natural number: ";

    int n, fact;

    cin >> n;
    fact = n;
    while (n>1){
         fact *=n-1;
         n -=1;
    }
    cout <<"factorial of "<< n << "is: " << fact;
}
