#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of terms: "<< endl;
    cin >> n;
    int prev = 1;
    cout << prev << prev;
    for (int i = 1; i< n-1; i++){
        cout << prev + i ;
        prev = i;
    }
}
