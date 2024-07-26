#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "enter a natural number: " << endl;
    cin >> n;

    for (int i =2; i < n/2; i++){
        if (n%i == 0){
            cout << "Not prime";
        }
        else{
            cout <<"prime";
        }
    }
}
