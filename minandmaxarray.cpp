#include<iostream>
#include<array>
using namespace std;

int main(){
    
    int n;
    cout << "enter the number of elements in the array: "<< endl;;
    cin >> n; 
    int arr[n];

    cout << "Enter the elements of array: "<< endl;
    for(int i =0; i<n; i++){
        cin >> arr[i];
    }

    long int max = -0.000000007;
    long int min = 9999999999;

    for(int i = 0; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        else if(arr[i] < min){
            min = arr[i];
        }
    }

    cout << "Max element in the array: " << max << " and if min element in the array: " << min;
    return 0;
}
