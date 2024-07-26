#include<iostream>
using namespace std;

int main(){
    cout <<"enter an integer: ";
    
    int n;

    cin >> n;

    if (n%2 == 0){
        cout << "Even";
    }else{
        cout << "Odd";
    }
}
