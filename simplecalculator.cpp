#include<iostream>
using namespace std;

int main(){
    float a,b,result;
    char op;
    cout << "enter the numbers and operation between them space seperated (a + b): " << endl;
    cin >> a >> op >> b;
    
    switch(op){
    case '+':
        result = a + b;
        break;
    case '-':
            result = a - b;
            break;
    case '*':
            result = a * b;
            break;
    case '/':
            if(b != 0){
                result = a / b;
            }
            else{
                cout << "denominator cant be zero";
            }
            break;
        default:
            cout << "enter valid operator +,-,*,/";
            break;
    }
    cout << "result: "<< result;
    return 0;
}
