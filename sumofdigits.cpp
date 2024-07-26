#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a whole number: "<< endl;
    cin >> n;

    int sum = 0;
    while(n >0){
        int digit = n%10;
        sum += digit;
        n /= 10;
    }

    cout << "sum of digits of number" << n <<" is: " << sum;
    return 0;
}
