#include<iostream>
#include<vector>
using namespace std;

int main(){

    int rows,cols;

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of cols: ";
    cin >> cols;

    vector<vector<int>> mat1(rows, vector<int>(cols));
    vector<vector<int>> mat2(rows, vector<int>(cols));
    vector<vector<int>> matres(rows, vector<int>(cols));

    cout << "enter the elements of matrix1:  "<<endl;
    for(int i =0; i<rows; i++){
        for(int j = 0; j<cols; j++){
            cin >> mat1[i][j];
        }
    }


    cout << "enter the elements of matrix2:  "<<endl;
    for(int i =0; i<rows; i++){
        for(int j =0; j< cols; j++){
            cin >> mat2[i][j];
        }
    }

    cout << "Resultant matrix" << endl;

    for(int i =0; i<rows; i++){
        for(int j =0; j< cols; j++){
            cout << mat1[i][j]+ mat2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
