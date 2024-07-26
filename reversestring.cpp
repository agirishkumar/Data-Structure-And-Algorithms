#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string a;
    cout << "Enter a String: "<< endl;
    std::getline(cin,a);

    int n = a.length();
    for(int i =0; i<n/2; ++i){
        std::swap(a[i],a[n-i-1]);
    }

    cout << "Reversed string: "<<a;
}
